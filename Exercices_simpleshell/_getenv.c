#include <stdio.h>
#include <string.h>

extern char **environ;  // Déclaration de la variable globale environ

char *_getenv(const char *name) {
    // Parcourir toutes les variables d'environnement
    for (char **env = environ; *env != NULL; env++) {
        // Chercher si l'élément actuel commence par le nom de la variable
        if (strncmp(*env, name, strlen(name)) == 0) {
            // Vérifier que c'est bien suivi du signe égal
            if ((*env)[strlen(name)] == '=') {
                // Retourner la valeur de la variable d'environnement
                return *env + strlen(name) + 1;  // On saute le nom et le '='
            }
        }
    }
    // Si on n'a pas trouvé la variable, on retourne NULL
    return NULL;
}

int main() {
    // Test de la fonction _getenv
    const char *var = "PATH";
    char *value = _getenv(var);
    
    if (value != NULL) {
        printf("La valeur de %s est : %s\n", var, value);
    } else {
        printf("La variable d'environnement %s n'existe pas.\n", var);
    }
    
    return 0;
}

