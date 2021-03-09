#include <stdio.h>

int main()
{
    int num1 = 5;
    int num2 = 2;
    int resultado0 = num1 / num2;  // nesta operação o compilador ignora qualquer valor depois da virgula; ou seja sempre arredonda para baixo.

    printf ("%i\n", resultado0);

    int num3 = 5;
    float num4 = 2;
    float resultado1 = num3 / num4;

    printf ("%.1f\n", resultado1);

    return 0;
}