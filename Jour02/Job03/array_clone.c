#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **array_clone(char **strs, int n)
{
    // Allocation de mémoire pour le tableau clone
    char **strsClone = (char **)malloc(n * sizeof(char *));
    
    // Boucle pour copier les chaînes dans le tableau clone
    for (int i = 0; i < n; i++)
    {
        // Vérification pour éviter le dépassement de tableau
        if (strs[i] == NULL)
        {
            break;
        }

        // Allocation de mémoire pour la copie de la chaîne
        strsClone[i] = (char *)malloc((strlen(strs[i]) + 1) * sizeof(char));
        
        // Copie de la chaîne dans le tableau clone
        strcpy(strsClone[i], strs[i]);
    }

    // Ajout d'un pointeur NULL à la fin du tableau clone
    strsClone[n] = NULL;

    return strsClone;
}

int main()
{
    char *strs[] = {"Hello", "World!", "\n", NULL};
    int n = 3;

    char **clonedArray = array_clone(strs, n);

    // Affichage du tableau cloné
    for (int i = 0; clonedArray[i] != NULL; i++)
    {
        printf("%s ", clonedArray[i]);
    }

    // Libération de la mémoire allouée
    for (int i = 0; clonedArray[i] != NULL; i++)
    {
        free(clonedArray[i]);
    }
    free(clonedArray);

    return 0;
}
