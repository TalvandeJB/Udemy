#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", tab + i);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("valeur :%d\n", *(tab + i));
        printf("adresse :%p\n", (tab + i));
    }

    return 0;
}