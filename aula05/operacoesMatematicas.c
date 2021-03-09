#include <stdio.h>

int main()
{
    int minhaIdade = 41;
    int maeIdade = 73;
    int irmaoIdade = 46;

    int idadeTotal0 = minhaIdade + maeIdade + irmaoIdade;
    int idadeTotal1 = minhaIdade - maeIdade - irmaoIdade;
    int idadeTotal2 = minhaIdade * maeIdade * irmaoIdade;
    int idadeTotal3 = minhaIdade / maeIdade / irmaoIdade;

    printf ("Total das idades da familia é %i anos\n", idadeTotal0);
    printf ("Total das idades da familia é %i anos\n", idadeTotal1);
    printf ("Total das idades da familia é %i anos\n", idadeTotal2);
    printf ("Total das idades da familia é %i anos\n", idadeTotal3);

    return 0;
}