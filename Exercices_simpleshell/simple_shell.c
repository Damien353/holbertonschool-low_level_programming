#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define MAX_CMD_LEN 256

int main() {
    char command[MAX_CMD_LEN];
    pid_t pid;
    int status;

    // Boucle pour que le shell continue à fonctionner
    while (1) {
        // Affichage du prompt
        printf("$ ");
        
        // Lire la commande entrée par l'utilisateur
        if (fgets(command, sizeof(command), stdin) == NULL) {
            if (feof(stdin)) {
                break; // Si c'est la fin de l'entrée, quitter
            }
            perror("fgets");
            continue;
        }

        // Supprimer le saut de ligne de la commande
        command[strcspn(command, "\n")] = '\0';

        // Si la commande est vide, continuer
        if (strlen(command) == 0) {
            continue;
        }

        // Créer un processus enfant pour exécuter la commande
        pid = fork();
        
        if (pid < 0) {
            perror("fork");
            exit(EXIT_FAILURE);
        }

        if (pid == 0) {  // Processus enfant
            // Exécuter la commande avec son chemin complet
            if (execlp(command, command, (char *)NULL) == -1) {
                perror("execlp");
                exit(EXIT_FAILURE);
            }
        } else {  // Processus parent
            // Attendre la fin de l'exécution de l'enfant
            waitpid(pid, &status, 0);
        }
    }

    printf("Exiting shell...\n");
    return 0;
}

