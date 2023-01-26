#include "tab_1D.h"

int tab_1D(int taille)
{

    int *tab = (int *)malloc(taille * sizeof(int));

    if (tab == NULL)
    {
        return -1;
    }
    for (int i = 0; i < taille; i++)
    {
        printf("Tab[%d] =", i);
        scanf("%d", (tab + i));
    }

    printf("Tab = {");
    for (int i = 0; i < taille; i++)
    {
        if (i < taille - 1)
            printf("%d, ", *(tab + i));
        else
            printf("%d}", *(tab + i));
    }
    free(tab);
    return 0;
}
