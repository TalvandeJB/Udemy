#include <stdio.h>
#include <stdlib.h>

float tva(int nb, int taux)
{
    return (float)nb * (float)(1 - (taux / 100));
}

int main()
{
    const float TAUX_ALCOOL = 31.5;
    const float TAUX_NOURRITURE = 5.5;
    printf("%f\n", tva(100, TAUX_ALCOOL));
}