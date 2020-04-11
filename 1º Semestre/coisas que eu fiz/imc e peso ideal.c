#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char conf, conf2, nome[100];
    int sex;
    float peso=0, altura=0, IMC=0, peso_ideal=0;
    do
    {
        conf2=0;
        system("color 0F");
        printf("\n  Programa para calcular IMC (Ind�ce de Massa Corporal) e mostrar seu peso ideal");
        printf("\n  O programa solicitar� seu peso atual, e sua altura ");
        printf("\n  Os c�lculos ser�o feitos com base na tabela para pessoas adultas");
        printf("\n  N�o � recomendado para menores de idade");
        printf("\n\n    Digite S para continuar: ");
            conf = getche();
        if(conf=='s' || conf=='S')
        {
            system("cls");
            printf("\n\n   Informe seu sexo (1 - Mulheres  /  2 - Homens) ---> ");
                sex=getche();
            if (sex=='1' || sex== '2')
            {
                switch (sex)
                {
                    case '1':
                    {
                        system("color CF");
                        printf("\n\n   Informe seu nome: ");
                            scanf("%s", &nome);
                        printf("   Informe sua altura em metros: ");
                            scanf("%f", &altura);
                        printf("   Informe o seu peso atual: ");
                            scanf("%f", &peso);
                        IMC = (peso / (altura * altura));
                        peso_ideal =  ((altura - 1) * 0.85)*100;
                        if (IMC <= 19.1)
                        {
                            system("color 4F");
                            system("cls");
                            printf("\n  PESO IDEAL = %g\n", peso_ideal);
                            printf("    IMC = %g\n", IMC);
                            printf("\n\n   ABAIXO DO PESO\n");
                            printf("\n\n    %s,\n\n", nome);
                            printf("\n\n   Estar abaixo do peso � uma condi��o em que a pessoa pesa menos do que � considerado adequado para aquela altura, idade e sexo.");
                            printf("\n\n   Ao perder muito peso em um curto per�odo de tempo, � preciso investigar a causa do emagrecimento.");
                            printf("\n\n   Unhas e cabelos secos e quebradi�os\n   Pele seca\n   Incapacidade de se concentrar\n   Esquecimento\n   Exaust�o\n   Irritabilidade\n   Perda de apetite\n   Dor nas articula��es\n   Vertigem\n   Sensa��o de desmaio\n    Dores de cabe�a");
                            printf("\n\n   Para ter um ganho de peso saud�vel, n�o se deve comer somente muitos alimentos cal�ricos e sim priorizar alguns alimentos com boa quantidade cal�rica,\n   mas ricos em nutrientes ben�ficos e com pouca quantidade de gordura saturada (de origem animal) e gordura trans (de industrializados).\n   Confira algumas estrat�gias interessantes que podem te ajudar nesse processo:");
                            printf("\n\n   Alimentos ricos em prote�na s�o grandes aliados: d� prefer�ncia �s carnes magras (alcatra, fil� mignon, maminha, fraldinha), frango e principalmente peixes e ovos,\n   al�m de leite e queijos brancos como ricota e minas");
                            printf("\n\n   Aposte nas gorduras boas: amendoim, nozes, am�ndoa, avel�, castanhas, azeite de oliva, linha�a e abacate");
                            printf("\n\n   Aumente o consumo de p�es, bolos, massas, mandioca, batata, milho e cereais (arroz, farinha de trigo, fub�, aveia),\n   lembrando sempre de optar pelas vers�es integrais");
                            printf("\n\n   Evite alimentos nas vers�es diet e light, baixo teor de gorduras, calorias reduzidas");
                            printf("\n\nfonte: https://www.minhavida.com.br/alimentacao/tudo-sobre/32159-imc");
                            printf("\n\n");
                        }
                        if (IMC > 19.1 && IMC <= 25.8)
                        {
                            system("color 2F");
                            system("cls");
                            printf("\n   PESO IDEAL = %g\n", peso_ideal);
                            printf("    IMC = %g\n", IMC);
                            printf("\n\n   PESO NORMAL\n");
                            printf("\n\n    %s,\n\n", nome);
                            printf("\n\n   Estar dentro da faixa de peso normal significa ter um peso considerado adequado para sua altura, idade e sexo, de acordo com as faixas do IMC -\n   para manter o peso � importante manter uma dieta balanceada\n   (n�o basta alimentos corretos, mas tamb�m quantidades corretas) para seu organismo.\n\n   Pontos importantes para manter o peso:");
                            printf("\n\n   N�o existe alimento 100%% bom ou 100%% ruim. Varie ao m�ximo o seu card�pio e n�o elimine completamente nenhum tipo de alimento. O equil�brio entre a quantidade e a\n   freq��ncia com a qual voc� consome refei��es mais cal�ricas � a garantia do seu sucesso");
                            printf("\n\n   Estabele�a uma rotina alimentar");
                            printf("\n\n   Analise os r�tulos dos alimentos. Muitas vezes, os alimentos light cont�m uma pequena diferen�a na quantidade cal�rica, que nem compensa a troca");
                            printf("\n\n   Praticar atividades f�sicas de forma regular");
                            printf("\n\n   Descanse e durma o suficiente");
                            printf("\n\n   Para ter uma alimenta��o saud�vel � importante que ela seja muito variada e conte com todos os grupos alimentares. Lembrando que produtos alimentares\n   como embutidos, bolachas recheadas, entre outros, n�o entram na conta");
                            printf("\n\n   Aumentar a ingest�o de l�quidos no dia (m�nimo de 2L de �gua)");
                            printf("\n\nfonte: https://www.minhavida.com.br/alimentacao/tudo-sobre/32159-imc");
                            printf("\n\n");
                        }
                        if (IMC > 25.8 && IMC <= 29.9 )
                        {
                            system("color 6F");
                            system("cls");
                            printf("\n   PESO IDEAL = %g\n", peso_ideal);
                            printf("   IMC = %g\n", IMC);
                            printf("\n\n   SOBREPESO\n");
                            printf("\n\n   %s,\n\n", nome);
                            printf("\n\n   O sobrepeso � uma condi��o em que a pessoa pesa mais do que � considerado adequado para aquela altura, idade e sexo. O sedentarismo e os maus h�bitos alimentares\n   levam ao aumento dessa parcela de indiv�duos com sobrepeso a cada ano. Essa faixa,\n   se analisada junto com outras medidas e �ndices, pode demonstrar um risco maior de doen�as como diabetes tipo 2, dislipidemia\n   (com colesterol HDL baixo e triglic�rides altos), �cido �rico aumentado, hipertens�o, entre outras.");
                            printf("\n\n   O tratamento para o sobrepeso depende de sua causa. Contudo, manter bons h�bitos alimentares e praticar atividades f�sicas s�o aliados contra o excesso de peso.\n   Em casos mais graves, a cirurgia bari�trica pode ser uma alternativa.\n   Dependendo da causa do excesso de peso, pode ser necess�ria a consulta com o psic�logo ou psiquiatra.\n   Os rem�dios para emagrecer, quando bem indicados e sempre com acompanhamento m�dico, podem ser �teis dependendo do caso.");
                            printf("\n\nfonte: https://www.minhavida.com.br/alimentacao/tudo-sobre/32159-imc");
                            printf("\n\n");
                        }
                        if (IMC > 29.9 && IMC <= 34.9)
                        {
                            system("color 5F");
                            system("cls");
                            printf("\n   PESO IDEAL = %g\n", peso_ideal);
                            printf("   IMC = %g\n", IMC);
                            printf("\n\n   OBESIDADE GRAU I\n");
                            printf("\n\n   %s,\n\n", nome);
                            printf("\n\n   O tratamento � realizado atrav�s de dieta apropriada com avalia��o m�dica junto com a pr�tica de exerc�cios, desde que o paciente seja avaliado e liberado.\n   Al�m disso, � preciso que o paciente realize as atividades com o acompanhamento de um profissional de educa��o f�sica.\n   Em alguns casos avaliados pelo m�dico, pode-se fazer o uso de rem�dios para emagrecer para ajudar no controle do peso.");
                            printf("\n\n   A cirurgia bari�trica tamb�m pode ser destinada ao tratamento.\n   � acompanhada de outras doen�as cuja obesidade � um agravante ou doen�as associadas ao excesso de gordura corporal.\n   Mas neste grau de obesidade, os outros meios do controle de peso s�o priorizados e a bari�trica s� passa a ser considerada\n   quando as alternativas prim�rias s�o comprovadamente ineficazes.\n   Pacientes que t�m IMC abaixo de 35, sem doen�as associadas, devem sem d�vidas tentar o tratamento cl�nico antes, com chances de conseguir resultados razo�veis.");
                            printf("\n\nfonte: https://www.minhavida.com.br/alimentacao/tudo-sobre/32159-imc");
                            printf("\n\n");
                        }
                        if (IMC > 34.9 && IMC <= 39.9)
                        {
                            system("color 4F");
                            system("cls");
                            printf("\n   PESO IDEAL = %g\n", peso_ideal);
                            printf("   IMC = %g\n", IMC);
                            printf("\n\n   OBESIDADE GRAU II\n");
                            printf("\n\n   %s,\n\n", nome);
                            printf("\n\n   Os riscos associados � obesidade de grau II s�o mais acentuados. Entre eles, est�o a esteatose hep�tica, doen�as articulares,\n   hipertens�o, diabetes mellitus, s�ndrome metab�lica,\n   c�nceres, infarto agudo do mioc�rdio e acidente vascular cerebral, lembrando que estes dois �ltimos s�o as principais causas de morte no Brasil e no mundo.");
                            printf("\n\n   O tratamento desse quadro � dado atrav�s de mudan�as no estilo de vida, associado ao tratamento multiprofissional com nutricionista, psic�logo e m�dico.\n   O uso de medica��es para a perda de peso tamb�m � um m�todo que pode ser proposto diante de avalia��o e acompanhamento m�dico.");
                            printf("\n\n   J� a cirurgia bari�trica costuma ser indicada para obesidade grau II quando n�o h� resultados no tratamento convencional\n   nos �ltimos dois anos e quando est� associada a outras comorbidades,\n   ou seja, outras doen�as que podem vir associadas ao excesso de peso, que levam a redu��o da expectativa e da qualidade de vida.");
                            printf("\n\nfonte: https://www.minhavida.com.br/alimentacao/tudo-sobre/32159-imc");
                            printf("\n\n");
                        }
                        if (IMC > 39.9)
                        {
                            system("color 4F");
                            system("cls");
                            printf("\n   PESO IDEAL = %g\n", peso_ideal);
                            printf("   IMC = %g\n", IMC);
                            printf("\n\n   OBESIDADE GRAU III\n");
                            printf("\n\n   %s,\n\n", nome);
                            printf("\n\n   Entre as patologias associadas � obesidade grau 3, est�o os dist�rbios hormonais, cardiopatias, morte s�bita, dermatites, osteoporose, hipertens�o, hepatopatias e insufici�ncia venosa.\n   Por�m, segundo a Organiza��o Mundial de Sa�de (OMS), a obesidade de grau III � a principal causa de morte evit�vel do mundo.");
                            printf("\n\n   A associa��o de reeduca��o alimentar e atividade f�sica t�m melhores resultados a curto e m�dio prazo, por�m, muitas vezes, em pacientes com obesidade grau III,\n   a atividade f�sica acaba sendo bastante restrita, dependendo do grau de excesso de peso e das artropatias associadas.");
                            printf("\n\n   Nesses casos, esses pacientes podem optar por fazer a cirurgia de redu��o de est�mago para controlar o peso e sair da obesidade.\n   Existem quatro t�cnicas diferentes de cirurgia bari�trica para obesidade reconhecidas pelo Conselho Federal de Medicina (CFM):\n\n\n   Banda G�strica Ajust�vel, Gastrectomia Vertical, Bypass G�strico e Deriva��o Bileopancre�tica.\n\n\n   A escolha da cirurgia depender� do quadro do paciente, do grau de obesidade e das doen�as relacionadas.");
                            printf("\n\nfonte: https://www.minhavida.com.br/alimentacao/tudo-sobre/32159-imc");
                            printf("\n\n");
                        }
                        break;
                    }
                    case '2':
                    {
                        system("color 3F");
                        printf("\n\n   Informe seu nome: ");
                            scanf("%s", &nome);
                        printf("   Informe sua altura em metros: ");
                            scanf("%f", &altura);
                        printf("   Informe o seu peso atual: ");
                            scanf("%f", &peso);
                        IMC = (peso / (altura*altura));
                        peso_ideal = ((altura - 1) * 0.90)*100;
                        if (IMC <= 20.7)
                        {
                            system("color 4F");
                            system("cls");
                            printf("\n   PESO IDEAL = %g\n", peso_ideal);
                            printf("   IMC = %g\n", IMC);
                            printf("\n\n   ABAIXO DO PESO\n");
                            printf("\n\n   %s,\n\n", nome);
                            printf("\n\n   Estar abaixo do peso � uma condi��o em que a pessoa pesa menos do que � considerado adequado para aquela altura, idade e sexo.");
                            printf("\n\n   Ao perder muito peso em um curto per�odo de tempo, � preciso investigar a causa do emagrecimento.");
                            printf("\n\n   Unhas e cabelos secos e quebradi�os\n   Pele seca\n   Incapacidade de se concentrar\n   Esquecimento\n   Exaust�o\n   Irritabilidade\n   Perda de apetite\n   Dor nas articula��es\n   Vertigem\n   Sensa��o de desmaio\n    Dores de cabe�a");
                            printf("\n\n   Para ter um ganho de peso saud�vel, n�o se deve comer somente muitos alimentos cal�ricos e sim priorizar alguns alimentos com boa quantidade cal�rica,\n   mas ricos em nutrientes ben�ficos e com pouca quantidade de gordura saturada (de origem animal) e gordura trans (de industrializados).\n   Confira algumas estrat�gias interessantes que podem te ajudar nesse processo:");
                            printf("\n\n   Alimentos ricos em prote�na s�o grandes aliados: d� prefer�ncia �s carnes magras (alcatra, fil� mignon, maminha, fraldinha), frango e principalmente peixes e ovos,\n   al�m de leite e queijos brancos como ricota e minas");
                            printf("\n\n   Aposte nas gorduras boas: amendoim, nozes, am�ndoa, avel�, castanhas, azeite de oliva, linha�a e abacate");
                            printf("\n\n   Aumente o consumo de p�es, bolos, massas, mandioca, batata, milho e cereais (arroz, farinha de trigo, fub�, aveia),\n   lembrando sempre de optar pelas vers�es integrais");
                            printf("\n\n   Evite alimentos nas vers�es diet e light, baixo teor de gorduras, calorias reduzidas");
                            printf("\n\nfonte: https://www.minhavida.com.br/alimentacao/tudo-sobre/32159-imc");
                            printf("\n\n");
                        }
                        if (IMC > 20.7 && IMC <= 26.4)
                        {
                            system("color 2F");
                            system("cls");
                            printf("\n   PESO IDEAL = %g\n", peso_ideal);
                            printf("   IMC = %g\n", IMC);
                            printf("\n\n   PESO NORMAL\n");
                            printf("\n\n   %s,\n\n", nome);
                            printf("\n\n   Estar dentro da faixa de peso normal significa ter um peso considerado adequado para sua altura, idade e sexo, de acordo com as faixas do IMC -\n   para manter o peso � importante manter uma dieta balanceada\n   (n�o basta alimentos corretos, mas tamb�m quantidades corretas) para seu organismo.\n\n   Pontos importantes para manter o peso:");
                            printf("\n\n   N�o existe alimento 100%% bom ou 100%% ruim. Varie ao m�ximo o seu card�pio e n�o elimine completamente nenhum tipo de alimento. O equil�brio entre a quantidade e a\n   freq��ncia com a qual voc� consome refei��es mais cal�ricas � a garantia do seu sucesso");
                            printf("\n\n   Estabele�a uma rotina alimentar");
                            printf("\n\n   Analise os r�tulos dos alimentos. Muitas vezes, os alimentos light cont�m uma pequena diferen�a na quantidade cal�rica, que nem compensa a troca");
                            printf("\n\n   Praticar atividades f�sicas de forma regular");
                            printf("\n\n   Descanse e durma o suficiente");
                            printf("\n\n   Para ter uma alimenta��o saud�vel � importante que ela seja muito variada e conte com todos os grupos alimentares. Lembrando que produtos alimentares\n   como embutidos, bolachas recheadas, entre outros, n�o entram na conta");
                            printf("\n\n   Aumentar a ingest�o de l�quidos no dia (m�nimo de 2L de �gua)");
                            printf("\n\nfonte: https://www.minhavida.com.br/alimentacao/tudo-sobre/32159-imc");
                            printf("\n\n");
                        }
                        if (IMC > 26.4 && IMC <= 27.8 )
                        {
                            system("color 6F");
                            system("cls");
                            printf("\n   PESO IDEAL = %g\n", peso_ideal);
                            printf("   IMC = %g\n", IMC);
                            printf("\n\n   SOBREPESO\n");
                            printf("\n\n   O sobrepeso � uma condi��o em que a pessoa pesa mais do que � considerado adequado para aquela altura, idade e sexo. O sedentarismo e os maus h�bitos alimentares\n   levam ao aumento dessa parcela de indiv�duos com sobrepeso a cada ano. Essa faixa,\n   se analisada junto com outras medidas e �ndices, pode demonstrar um risco maior de doen�as como diabetes tipo 2, dislipidemia\n   (com colesterol HDL baixo e triglic�rides altos), �cido �rico aumentado, hipertens�o, entre outras.");
                            printf("\n\n   O tratamento para o sobrepeso depende de sua causa. Contudo, manter bons h�bitos alimentares e praticar atividades f�sicas s�o aliados contra o excesso de peso.\n   Em casos mais graves, a cirurgia bari�trica pode ser uma alternativa.\n   Dependendo da causa do excesso de peso, pode ser necess�ria a consulta com o psic�logo ou psiquiatra.\n   Os rem�dios para emagrecer, quando bem indicados e sempre com acompanhamento m�dico, podem ser �teis dependendo do caso.");
                            printf("\n\nfonte: https://www.minhavida.com.br/alimentacao/tudo-sobre/32159-imc");
                            printf("\n\n");
                        }
                        if (IMC > 27.8 && IMC <= 34.9)
                        {
                            system("color 5F");
                            system("cls");
                            printf("\n   PESO IDEAL = %g\n", peso_ideal);
                            printf("   IMC = %g\n", IMC);
                            printf("\n\n   OBESIDADE GRAU I\n");
                            printf("\n\n   %s,\n\n", nome);
                            printf("\n\n   O tratamento � realizado atrav�s de dieta apropriada com avalia��o m�dica junto com a pr�tica de exerc�cios, desde que o paciente seja avaliado e liberado.\n   Al�m disso, � preciso que o paciente realize as atividades com o acompanhamento de um profissional de educa��o f�sica.\n   Em alguns casos avaliados pelo m�dico, pode-se fazer o uso de rem�dios para emagrecer para ajudar no controle do peso.");
                            printf("\n\n   A cirurgia bari�trica tamb�m pode ser destinada ao tratamento.\n   � acompanhada de outras doen�as cuja obesidade � um agravante ou doen�as associadas ao excesso de gordura corporal.\n   Mas neste grau de obesidade, os outros meios do controle de peso s�o priorizados e a bari�trica s� passa a ser considerada\n   quando as alternativas prim�rias s�o comprovadamente ineficazes.\n   Pacientes que t�m IMC abaixo de 35, sem doen�as associadas, devem sem d�vidas tentar o tratamento cl�nico antes, com chances de conseguir resultados razo�veis.");
                            printf("\n\nfonte: https://www.minhavida.com.br/alimentacao/tudo-sobre/32159-imc");
                            printf("\n\n");
                        }
                        if (IMC > 34.9 && IMC <= 39.9)
                        {
                            system("color 4F");
                            system("cls");
                            printf("\n   PESO IDEAL = %g\n", peso_ideal);
                            printf("   IMC = %g\n", IMC);
                            printf("\n\n   OBESIDADE GRAU II\n");
                            printf("\n\n   %s,\n\n", nome);
                            printf("\n\n   Os riscos associados � obesidade de grau II s�o mais acentuados. Entre eles, est�o a esteatose hep�tica, doen�as articulares,\n   hipertens�o, diabetes mellitus, s�ndrome metab�lica,\n   c�nceres, infarto agudo do mioc�rdio e acidente vascular cerebral, lembrando que estes dois �ltimos s�o as principais causas de morte no Brasil e no mundo.");
                            printf("\n\n   O tratamento desse quadro � dado atrav�s de mudan�as no estilo de vida, associado ao tratamento multiprofissional com nutricionista, psic�logo e m�dico.\n   O uso de medica��es para a perda de peso tamb�m � um m�todo que pode ser proposto diante de avalia��o e acompanhamento m�dico.");
                            printf("\n\n   J� a cirurgia bari�trica costuma ser indicada para obesidade grau II quando n�o h� resultados no tratamento convencional\n   nos �ltimos dois anos e quando est� associada a outras comorbidades,\n   ou seja, outras doen�as que podem vir associadas ao excesso de peso, que levam a redu��o da expectativa e da qualidade de vida.");
                            printf("\n\nfonte: https://www.minhavida.com.br/alimentacao/tudo-sobre/32159-imc");
                            printf("\n\n");
                        }
                        if (IMC > 39.9)
                        {
                            system("color 4F");
                            system("cls");
                            printf("\n   PESO IDEAL = %g\n", peso_ideal);
                            printf("   IMC = %g\n", IMC);
                            printf("\n\n   OBESIDADE GRAU III\n");
                            printf("\n\n   %s,\n\n", nome);
                            printf("\n\n   Entre as patologias associadas � obesidade grau 3, est�o os dist�rbios hormonais, cardiopatias, morte s�bita, hipertens�o, hepatopatias e insufici�ncia venosa.\n   Por�m, segundo a Organiza��o Mundial de Sa�de (OMS), a obesidade de grau III � a principal causa de morte evit�vel do mundo.");
                            printf("\n\n   A associa��o de reeduca��o alimentar e atividade f�sica t�m melhores resultados a curto e m�dio prazo, por�m, muitas vezes, em pacientes com obesidade grau III,\n   a atividade f�sica acaba sendo bastante restrita, dependendo do grau de excesso de peso e das artropatias associadas.");
                            printf("\n\n   Nesses casos, esses pacientes podem optar por fazer a cirurgia de redu��o de est�mago para controlar o peso e sair da obesidade.\n   Existem quatro t�cnicas diferentes de cirurgia bari�trica para obesidade reconhecidas pelo Conselho Federal de Medicina (CFM):\n\n\n   Banda G�strica Ajust�vel, Gastrectomia Vertical, Bypass G�strico e Deriva��o Bileopancre�tica.\n\n\n   A escolha da cirurgia depender� do quadro do paciente, do grau de obesidade e das doen�as relacionadas.");
                            printf("\n\nfonte: https://www.minhavida.com.br/alimentacao/tudo-sobre/32159-imc");
                            printf("\n\n");
                        }
                        break;
                    }
                }
                printf("\n\n    Deseja continuar(S/N)?");
                printf("\n   ---> ");
                    conf2 = getche();
                if (conf2 == 's' || conf2 == 'S')
                {
                    system("color 0F");
                    system("cls");
                    conf=0;
                    nome[100]=0;
                    sex=0;
                    peso=0;
                    altura=0;
                    IMC=0;
                    peso_ideal=0;
                }
                else
                    system("color 4");
                    system("cls");
            }
            else
            {
                printf("\n\n   Valor n�o corresponde!\n\n");
            }
        }
        else
        {
            printf("\n\n  OK!\n\n");
            system("pause");
        }
    }while(conf2 == 's' || conf2 == 'S');
}
