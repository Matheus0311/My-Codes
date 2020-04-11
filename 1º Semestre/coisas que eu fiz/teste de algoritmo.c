#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    float n1, n2, n3, n4, n5, ma, mf;
    setlocale(LC_ALL, "Portuguese");
    printf("n1: ");
        scanf("%f", &n1);
    printf("\nn2: ");
        scanf("%f", &n2);
    printf("\nn3: ");
        scanf("%f", &n3);
    printf("\nn4: ");
        scanf("%f", &n4);

    ma = ((n1+n2+n3+n4)/4);

    if (ma >= 7)
        {
            printf("\nAluno aprovado!");
            printf("\nEssa é sua nota final: %f", ma);
        }
    else
    {
        printf("\nExame: ");
            scanf("%f", &n5);

        mf = ((ma+n5)/2);

        if (mf >= 5)
            printf("\nAluno aprovado com exame!");
        else
            printf("\nAluno Reprovado!");
        printf("\nEssa foi a sua média: %f", mf);

    }

}
