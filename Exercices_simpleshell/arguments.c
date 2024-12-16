#include <stdio.h>

int main(int ac, char **av) {
    // Parcourt le tableau av jusqu'à la fin (NULL)
    while (*av != NULL) {
        printf("%s\n", *av);
        av++;  // Passe à l'argument suivant
    }
    return 0;
}

