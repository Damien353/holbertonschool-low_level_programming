#include <stdio.h>
#include <stdlib.h>

extern char **environ;  // Déclaration de la variable globale environ

int main(int ac, char **av, char **env) {
    // Afficher l'adresse de 'env' (paramètre pass�a  main)
    printf("Adresse de env : %p\n", (void *)env);
    
    // Afficher l'adresse de 'environ' (variable globale)
    printf("Adresse de environ : %p\n", (void *)environ);
    
    // Comparaison des deux adresses
    if (env == environ) {
        printf("Les adresses de 'env' et 'environ' sont les mêmes.\n");
    } else {
        printf("Les adresses de 'env' et 'environ' sont différentes.\n");
    }
    
    return 0;
}

