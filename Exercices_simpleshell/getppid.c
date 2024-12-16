#include <stdio.h>
#include <unistd.h>  // Pour getppid()

int main() {
    // Affiche le PID du processus parent
    printf("PID du processus parent : %d\n", getppid());
    return 0;
}

