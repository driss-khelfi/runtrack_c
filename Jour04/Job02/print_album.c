#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Définition de la structure
struct Album {
    char artist[100];  // Utilisez un tableau pour stocker une chaîne de caractères
    char title[100];
    int year;
};

// Déclaration de la fonction print_album
void print_album(struct Album *album);

int main() {
    // Allocation dynamique d'une structure Album
    struct Album *myAlbum = malloc(sizeof(struct Album));

    // Remplissage de la structure avec des valeurs
    strcpy(myAlbum->artist, "Metallica");
    strcpy(myAlbum->title, "Master of Puppets");
    myAlbum->year = 1986;

    // Appel de la fonction pour afficher l'album
    print_album(myAlbum);

    // Libération de la mémoire allouée
    free(myAlbum);

    return 0;
}

// Implémentation de la fonction print_album
void print_album(struct Album *album) {
    write("\"%s\" by \"%s\" released in %d.\n", album->title, album->artist, album->year);
}
