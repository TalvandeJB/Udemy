#include <stdio.h>
#include <stdlib.h>

int echange(int *nb1, int *nb2)
{
    int temp = *nb1;
    *nb1 = *nb2;
    *nb2 = temp;
}

int tri_selection(int *tab, int taille)
{
    for (int i = 0; i < taille - 1; i++)
    {
        int index_min = i;
        int min = *(tab + i);
        for (int j = i + 1; j < taille; j++)
        {
            if (*(tab + j) < *(tab + index_min))
            {
                index_min = j;
            }
        }
        echange((tab + i), (tab + index_min));
    }

    return 0;
}

int tri_bulle(int *tab, int taille)
{
    for (int i = 0; i < taille - 1; i++)
    {
        for (int j = i + 1; j < taille; j++)
        {
            if (*(tab + i) > *(tab + j))
            {
                echange(tab + i, tab + j);
            }
        }
    }
}

int main()
{
    // int a = 10;
    // int b = 20;
    // printf("A = %d et B = %d \n", a, b);
    // echange(&a, &b);
    // printf("A = %d et B = %d \n", a, b);
    int tab[10] = {3, 7, 4, 9, 2, 8, 10, 5, 1, 6};
    // tri_selection(tab, 10);
    tri_bulle(tab, 10);
    // echange((tab + 1), (tab + 5));
    for (int i = 0; i < 10; i++)
    {
        printf(" %d ", *(tab + i));
    }
}