#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int *memoireAllouee = NULL;

    memoireAllouee = malloc(sizeof(int));
    if (memoireAllouee == NULL) // Si l'allocation a échoué
    {
        exit(0); // On arrête immédiatement le programme
    }

    // On peut continuer le programme normalement sinon

    return 0;
}