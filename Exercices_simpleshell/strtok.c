#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TOKENS 100  // Nombre maximal de mots à extraire

// Fonction pour découper une ligne en mots
char **split_line(char *line, size_t *num_tokens) {
    char **tokens = malloc(MAX_TOKENS * sizeof(char *));  // Tableau de pointeurs de chaînes
    if (!tokens) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    char *token = strtok(line, " \t\r\n");  // Utilise les espaces, tabulations et retours à la ligne comme délimiteurs
    size_t count = 0;

    while (token != NULL && count < MAX_TOKENS) {
        tokens[count] = token;  // Stocke le token dans le tableau
        count++;
        token = strtok(NULL, " \t\r\n");  // Appel suivant pour obtenir le prochain token
    }

    *num_tokens = count;  // Retourne le nombre de mots trouvés
    return tokens;
}

int main() {
    char *line = NULL;       // Pointeur pour stocker la ligne
    size_t len = 0;          // Longueur de la ligne
    ssize_t nread;           // Nombre de caractères lus

    // Affiche le prompt "$ "
    printf("$ ");

    // Lit la ligne entrée par l'utilisateur
    nread = getline(&line, &len, stdin);

    // Si getline réussit, on continue
    if (nread != -1) {
        // Nombre de mots après découpe
        size_t num_tokens = 0;
        
        // Copie de la ligne pour ne pas modifier l'originale
        char *line_copy = strdup(line);  // Copie de la ligne pour strtok
        
        // Découpe la ligne en mots
        char **tokens = split_line(line_copy, &num_tokens);

        // Affiche les mots extraits
        printf("Mots extraits :\n");
        for (size_t i = 0; i < num_tokens; i++) {
            printf("%s\n", tokens[i]);
        }

        // Libération de la mémoire
        free(tokens);
        free(line_copy);  // La copie de la ligne doit aussi être libérée
    } else {
        perror("getline");   // Affiche une erreur si getline échoue
    }

    // Libère la mémoire allouée pour la ligne d'entrée
    free(line);

    return 0;
}

