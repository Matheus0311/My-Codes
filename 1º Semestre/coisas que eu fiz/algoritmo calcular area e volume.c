#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    system("color 0A");
    int opcao;
    float a, b, h, l, v, r;
    setlocale(LC_ALL, "Portuguese");

    printf("  ------->Escolha a sua op��o:<--------\n");
    printf("  -------------------------------------");
    printf("\n| 1-Calcular a �rea de um tri�ngulo     |\n");
    printf("\n| 2-Calcular a �rea de um ret�ngulo     |\n");
    printf("\n| 3-Calcular o volume de uma esfera     |\n");
    printf("  -------------------------------------\n");
    printf("\nInforme sua op��o: ");
    scanf("%d", &opcao);
    printf("\n---------------------------------------\n");
    switch (opcao)
        {
            case 1:
            {
                printf("\nInforme a base: ");
                    scanf("%f", &b);
                printf("\nInforme a altura: ");
                    scanf("%f", &h);
                a = ((b*h)/2);
                printf("\n---------------------------------------\n");
                printf("\nEssa � a sua �rea: %g\n", a);
                printf("\n---------------------------------------\n");
                break;
            }
            case 2:
            {
                printf("\nInforme o lado: ");
                    scanf("%f", &l);
                a = l*l;
                printf("\n---------------------------------------\n");
                printf("\nEssa � a sua �rea: %g\n", a);
                printf("\n---------------------------------------\n");
                break;
            }
            case 3:
            {
                printf("\nInforme o raio: ");
                scanf("%f", &r);
                v = ((4/3)*(3.1415926 )*(r*r*r));
                printf("\n---------------------------------------\n");
                printf("\nEsse � o seu volume: %g\n", v);
                printf("\n---------------------------------------\n");
                break;
            }
            default:
                printf("\nN�mero inv�lido!\n");
                printf("\n---------------------------------------\n");
                break;
    }
}
