#include <stdio.h>
#include <stdlib.h>

int main() {
    char *line = NULL;       // Pointeur pour stocker la ligne
    size_t len = 0;          // Longueur de la ligne
    ssize_t nread;           // Nombre de caractères lus

    // Affiche le prompt "$ "
    printf("$ ");

    // Lit la ligne entrée par l'utilisateur
    nread = getline(&line, &len, stdin);

    // Si getline réussit à lire, affiche la ligne
    if (nread != -1) {
        printf("%s", line);  // Affiche la ligne sans modification
    } else {
        perror("getline");   // Affiche une erreur si getline échoue
    }

    // Libère la mémoire allouée pour la ligne
    free(line);

    return 0;
}

