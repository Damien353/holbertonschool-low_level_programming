#include <stdio.h>
#include <unistd.h>

extern char **environ;

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
    char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

    printf("Before execve\n");
    if (execve(argv[0], argv, environ) == -1)
    {
        perror("Error:");
    }
    printf("After execve\n");
    return (0);
}
