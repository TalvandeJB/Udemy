#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = 'A';
    char *pt_a = &a;
    printf("Caracteristique de la variable :\n");
    printf("\tValeur de a : %c\n", *pt_a);
    printf("\tAdresse de a: %d\n", (int)pt_a);
    printf("\tTaille de a : %d\n", sizeof(a));
    return 0;
}