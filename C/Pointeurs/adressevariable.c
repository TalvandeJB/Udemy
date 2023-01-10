#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = 'A';
    char *pt_a = &a;
    printf("\tvaleur de a : %c\n", *pt_a);
    printf("\tadresse de a: %d\n", &pt_a);
    printf("\ttaille de a : %d\n", sizeof(a));
    return 0;
}