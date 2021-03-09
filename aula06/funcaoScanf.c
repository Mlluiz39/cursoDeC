#include <stdio.h>

int main()
{
    int base;
    int altura;
    int area;

    printf ("digite o valor da base:");
    scanf ("%i", &base);

    printf ("digite o valor da altura:");
    scanf ("%i", &altura);

    area = base * altura;

    printf ("O valor da area do retangulo é => %i\n", area);

    return 0;
}