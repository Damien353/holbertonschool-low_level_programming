#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **split_string_to_av(const char *str) {
    // Compte le nombre de mots dans la chaîne
    int count = 0;
    const char *tmp = str;
    while (*tmp) {
        if (*tmp == ' ') {
            count++;
        }
        tmp++;
    }
    count++;  // Ajouter 1 pour le dernier mot

    // Allouer un tableau de chaînes de caractères pour stocker les mots
    char **av = malloc((count + 1) * sizeof(char *));  // +1 pour le NULL à la fin
    if (!av) {
        perror("malloc");
        return NULL;
    }

    // Créer une copie de la chaîne pour pouvoir la modifier
    char *str_copy = strdup(str);
    if (!str_copy) {
        perror("strdup");
        free(av);
        return NULL;
    }

    // Utiliser strtok pour découper la chaîne
    char *token = strtok(str_copy, " ");  // Utilise l'espace comme délimiteur
    int i = 0;
    while (token) {
        av[i] = strdup(token);  // Allouer de la mémoire pour chaque mot
        if (!av[i]) {
            perror("strdup");
            // Libérer toute la mémoire allouée en cas d'erreur
            for (int j = 0; j < i; j++) {
                free(av[j]);
            }
            free(av);
            free(str_copy);
            return NULL;
        }
        i++;
        token = strtok(NULL, " ");  // Récupérer le prochain mot
    }
    av[i] = NULL;  // Ajouter le pointeur NULL à la fin

    free(str_copy);  // Libérer la copie de la chaîne
    return av;
}

void free_av(char **av) {
    if (av) {
        for (int i = 0; av[i] != NULL; i++) {
            free(av[i]);  // Libérer chaque mot
        }
        free(av);  // Libérer le tableau de chaînes
    }
}

int main() {
    const char *str = "Bonjour tout le monde";
    
    // Appeler la fonction pour diviser la chaîne
    char **av = split_string_to_av(str);
    if (!av) {
        return 1;  // Erreur
    }

    // Afficher les mots
    for (int i = 0; av[i] != NULL; i++) {
        printf("av[%d]: %s\n", i, av[i]);
    }

    // Libérer la mémoire allouée
    free_av(av);
    return 0;
}

