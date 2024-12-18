#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;  // Déclaration de la variable globale environ

// Structure représentant un nœud de la liste chaînée
struct PathNode {
    char *directory;      // Contient un répertoire de PATH
    struct PathNode *next; // Pointeur vers le prochain nœud
};

// Fonction pour récupérer la valeur d'une variable d'environnement
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

// Fonction pour créer une liste chaînée à partir des répertoires de PATH
struct PathNode* build_path_list() {
    char *path = _getenv("PATH");
    if (path == NULL) {
        printf("La variable d'environnement PATH n'est pas définie.\n");
        return NULL;
    }

    struct PathNode *head = NULL;  // Pointeur vers le début de la liste
    struct PathNode *tail = NULL;  // Pointeur vers le dernier nœud ajouté

    // Utiliser strtok pour diviser la chaîne en répertoires
    char *directory = strtok(path, ":");

    while (directory != NULL) {
        // Créer un nouveau nœud pour le répertoire
        struct PathNode *new_node = (struct PathNode *)malloc(sizeof(struct PathNode));
        if (new_node == NULL) {
            printf("Erreur d'allocation mémoire.\n");
            return NULL;
        }

        // Initialiser le nœud
        new_node->directory = directory;
        new_node->next = NULL;

        // Si la liste est vide, le nouveau nœud devient le premier nœud
        if (head == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            // Ajouter le nouveau nœud à la fin de la liste
            tail->next = new_node;
            tail = new_node;
        }

        // Passer au répertoire suivant
        directory = strtok(NULL, ":");
    }

    return head;  // Retourner le pointeur vers le début de la liste
}

// Fonction pour afficher la liste chaînée des répertoires
void print_path_list(struct PathNode *head) {
    struct PathNode *current = head;
    while (current != NULL) {
        printf("%s\n", current->directory);
        current = current->next;
    }
}

// Fonction pour libérer la mémoire allouée pour la liste chaînée
void free_path_list(struct PathNode *head) {
    struct PathNode *current = head;
    struct PathNode *next_node;

    while (current != NULL) {
        next_node = current->next;
        free(current);  // Libérer la mémoire allouée pour le nœud
        current = next_node;
    }
}

int main() {
    struct PathNode *path_list = build_path_list();  // Construire la liste chaînée
    if (path_list != NULL) {
        print_path_list(path_list);  // Afficher la liste chaînée
        free_path_list(path_list);   // Libérer la mémoire de la liste
    }
    return 0;
}

