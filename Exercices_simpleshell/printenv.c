#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main() {
    // Parcourir et afficher toutes les variables d'environnement
    for (char **env = environ; *env != NULL; env++) {
        printf("%s\n", *env);  // Afficher chaque variable sous la forme KEY=VALUE
    }
    return 0;
}

