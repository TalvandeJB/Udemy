#include "tri.h"

int echange(int *nb1, int *nb2)
{
    int temp = *nb1;
    *nb1 = *nb2;
    *nb2 = temp;
    return 0;
}

int tri_selection(int *tab, int taille)
{
    for (int i = 0; i < taille - 1; i++)
    {
        int index_min = i;
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
    return 0;
}
