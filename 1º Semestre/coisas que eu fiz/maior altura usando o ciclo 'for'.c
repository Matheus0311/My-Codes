//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
int main()
{
    float altura=0, maior = 0;
    int i=1;
    setlocale(LC_ALL, "Portuguese");
    printf("Programa que mostra a maior altura entre 10 inseridas pelo usu�rio usando o ciclo 'for'.\n\n");
    printf("Informe a %d� altura: ", i);
        scanf("%f", &altura);
    maior = altura;
    for (i=2; i<=10; i++)
    {
        printf("\nInforme a %d� altura: ", i);
            scanf("%f", &altura);
        if (altura > maior)
            maior = altura;
    }
    printf("\nEssa � a maior altura: %g\n\n", maior);
}
