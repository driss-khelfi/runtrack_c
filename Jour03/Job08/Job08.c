#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

/*
Vous devez créer un programme (dans un ou plusieurs fichier(s) .c) qui prend en
arguments des chaînes de caractères, les trim, les trie dans l’ordre croissant puis les
affiche en une seule ligne, avec un seul espace séparant chaque mots, et en terminant
par un retour à la ligne.
*/
//reflechir a plusieurs étapes pour bien structurer le code done
// creer la chaîne de caractères dans le main done
// trim chaque chaine une à une
// les trier dans l'ordre croissant
// les afficher en une seule ligne avec un seul espace séparant chaque mot
// terminer par un retour à la ligne
// aller boire un café
void trim(char *str)
{
    int i = 0;
    int j = strlen(str) - 1;
    while(str[i] == ' ')
    {
        i++;
    }
    while(str[j] == ' ')
    {
        j--;
    }
    str[j + 1] = '\0';
    str = str + i;
}

void sort_by_ascend()
{
    //trier les chaînes de caractères dans l'ordre croissant
    

}
int main()
{

    char **strings = malloc(sizeof(char*) * 5);
    strings[0] = strdup("Bonjour");
    strings[1] = strdup("tout");
    strings[2] = strdup("le");
    strings[3] = strdup("monde");
    strings[4] = NULL;
    return 0;
}