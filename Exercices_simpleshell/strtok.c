#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Bonjour tout le monde";
    char *token = strtok(str, " ");  // Première découpe
    
    while (token != NULL) {
        printf("Token: %s\n", token);  // Affiche chaque token
        token = strtok(NULL, " ");  // Découpe les tokens suivants
    }

    return 0;
}

