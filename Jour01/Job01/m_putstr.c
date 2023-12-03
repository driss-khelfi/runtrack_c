#include <stdio.h>
#include <unistd.h>

// Déclaration de la fonction my_putchar
void my_putchar(char c);

// Déclaration de la fonction my_putstr
void my_putstr(char *str);

int main()
{
    my_putstr("Hello World!\n");
    return 0;
}

// Définition de la fonction my_putchar (copiée depuis le premier script)
void my_putchar(char c)
{
    write(1, &c, 1);
}

// Définition de la fonction my_putstr
void my_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        my_putchar(str[i]);
        ++i;
    }
}
