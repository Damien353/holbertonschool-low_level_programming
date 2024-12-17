#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid;
    int i;

    // Créer 5 processus enfants
    for (i = 0; i < 5; i++) {
        pid = fork();  // Crée un enfant

        if (pid == -1) {  // Vérification d'erreur dans fork
            perror("fork");
            exit(EXIT_FAILURE);
        }

        if (pid == 0) {  // Code exécuté par l'enfant
            printf("Enfant %d exécutant ls -l /tmp...\n", getpid());  // Affiche l'ID du processus enfant

            // Vérification si /bin/ls est accessible
            if (access("/bin/ls", X_OK) == -1) {
                perror("Erreur d'accès à /bin/ls");
                exit(EXIT_FAILURE);  // L'enfant termine si l'exécutable n'est pas accessible
            }

            char *argv[] = {"ls", "-l", "/tmp", NULL};
            char *envp[] = {NULL};  // Environnement vide, ou tu peux le personnaliser

            // Remplace l'image du processus enfant par la commande ls
            execve("/bin/ls", argv, envp);

            // Si execve échoue
            perror("execve");
            exit(EXIT_FAILURE);  // Terminer l'enfant en cas d'échec
        }
        // Si on est ici, on est dans le processus père
        else {
            // Attendre que l'enfant termine avant de créer le suivant
            wait(NULL);
        }
    }

    return 0;
}

