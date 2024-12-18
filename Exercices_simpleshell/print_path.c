#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;  // Déclaration de la variable globale environ

char *_getenv(const char *name) {
    for (char **env = environ; *env != NULL; env++) {
        if (strncmp(*env, name, strlen(name)) == 0) {
            if ((*env)[strlen(name)] == '=') {
                return *env + strlen(name) + 1;  // Retourner la valeur après le '='
            }
        }
    }
    return NULL;  // Si la variable n'est pas trouvée
}

void print_path() {
    // Récupérer la valeur de PATH à partir de l'environnement
    char *path = _getenv("PATH");
    
    if (path == NULL) {
        printf("La variable d'environnement PATH n'est pas définie.\n");
        return;
    }

    // Utiliser strtok pour diviser la chaîne en répertoires
    char *directory = strtok(path, ":");

    // Tant qu'on n'a pas atteint la fin de la chaîne
    while (directory != NULL) {
        printf("%s\n", directory);  // Afficher chaque répertoire sur une ligne
        directory = strtok(NULL, ":");  // Passer au répertoire suivant
    }
}

int main() {
    print_path();  // Appel de la fonction pour afficher les répertoires dans PATH
    return 0;
}

