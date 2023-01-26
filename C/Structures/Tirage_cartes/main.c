#include "tirage_carte.h"

int main()
{
    srand(time(NULL));
    Carte ma_carte;

    tirage_carte(&ma_carte);
    info_carte(ma_carte);
}