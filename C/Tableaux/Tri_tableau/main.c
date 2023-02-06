#include "tri.h"

int main()
{
    int tab[10] = {3, 7, 4, 9, 2, 8, 10, 5, 1, 6};
    tri_selection(tab, 10);
    // tri_bulle(tab, 10);
    for (int i = 0; i < 10; i++)
    {
        printf(" %d ", *(tab + i));
    }
    return 0;
}