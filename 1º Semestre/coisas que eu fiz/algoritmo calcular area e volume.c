#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    system("color 0A");
    int opcao;
    float a, b, h, l, v, r;
    setlocale(LC_ALL, "Portuguese");

    printf("  ------->Escolha a sua opção:<--------\n");
    printf("  -------------------------------------");
    printf("\n| 1-Calcular a área de um triângulo     |\n");
    printf("\n| 2-Calcular a área de um retângulo     |\n");
    printf("\n| 3-Calcular o volume de uma esfera     |\n");
    printf("  -------------------------------------\n");
    printf("\nInforme sua opção: ");
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
                printf("\nEssa é a sua área: %g\n", a);
                printf("\n---------------------------------------\n");
                break;
            }
            case 2:
            {
                printf("\nInforme o lado: ");
                    scanf("%f", &l);
                a = l*l;
                printf("\n---------------------------------------\n");
                printf("\nEssa é a sua área: %g\n", a);
                printf("\n---------------------------------------\n");
                break;
            }
            case 3:
            {
                printf("\nInforme o raio: ");
                scanf("%f", &r);
                v = ((4/3)*(3.1415926 )*(r*r*r));
                printf("\n---------------------------------------\n");
                printf("\nEsse é o seu volume: %g\n", v);
                printf("\n---------------------------------------\n");
                break;
            }
            default:
                printf("\nNúmero inválido!\n");
                printf("\n---------------------------------------\n");
                break;
    }
}
