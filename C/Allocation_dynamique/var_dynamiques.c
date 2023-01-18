#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *pt_age = (int *)malloc(sizeof(int));
    if (pt_age == NULL)
    {
        return -1;
    }
    printf("Quel est votre âge ?\n");
    scanf("%d", pt_age);
    printf("Votre age est de %d ans", *pt_age);
    free(pt_age);
    return 0;
}