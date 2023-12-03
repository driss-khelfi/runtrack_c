#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


void func_to_array(char **strs, void(*fun)(char*))
{
    //Parcourir le tableau de chaînes de caractères
    for(int i = 0; strs[i] !=NULL; i++)
    {
        //Appeler la fonction sur chaque chaîne de caractères
        fun(strs[i]);
    }
}

    
void strtoupper(char *str)
{
    while(*str != '\0')
    {
        *str = toupper(*str);
        str++;
    }
}

void strtolower(char *str)
{
    while(*str != '\0')
    {
        *str = tolower(*str);
        str++;
    }
}

void my_putstr(char *str)
{
    printf("%s\n", str);
    
}
int main()
{
    char *strings[] = {"Bonjour", "tout", "le", "monde", NULL}; 

    func_to_array(strings, strtoupper);
    func_to_array(strings, my_putstr);

    func_to_array(strings, strtolower);
    func_to_array(strings, my_putstr);
    printf("test\n");

    return 0;

}


