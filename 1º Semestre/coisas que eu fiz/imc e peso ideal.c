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
        printf("\n  Programa para calcular IMC (Indíce de Massa Corporal) e mostrar seu peso ideal");
        printf("\n  O programa solicitará seu peso atual, e sua altura ");
        printf("\n  Os cálculos serão feitos com base na tabela para pessoas adultas");
        printf("\n  Não é recomendado para menores de idade");
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
                            printf("\n\n   Estar abaixo do peso é uma condição em que a pessoa pesa menos do que é considerado adequado para aquela altura, idade e sexo.");
                            printf("\n\n   Ao perder muito peso em um curto período de tempo, é preciso investigar a causa do emagrecimento.");
                            printf("\n\n   Unhas e cabelos secos e quebradiços\n   Pele seca\n   Incapacidade de se concentrar\n   Esquecimento\n   Exaustão\n   Irritabilidade\n   Perda de apetite\n   Dor nas articulações\n   Vertigem\n   Sensação de desmaio\n    Dores de cabeça");
                            printf("\n\n   Para ter um ganho de peso saudável, não se deve comer somente muitos alimentos calóricos e sim priorizar alguns alimentos com boa quantidade calórica,\n   mas ricos em nutrientes benéficos e com pouca quantidade de gordura saturada (de origem animal) e gordura trans (de industrializados).\n   Confira algumas estratégias interessantes que podem te ajudar nesse processo:");
                            printf("\n\n   Alimentos ricos em proteína são grandes aliados: dê preferência às carnes magras (alcatra, filé mignon, maminha, fraldinha), frango e principalmente peixes e ovos,\n   além de leite e queijos brancos como ricota e minas");
                            printf("\n\n   Aposte nas gorduras boas: amendoim, nozes, amêndoa, avelã, castanhas, azeite de oliva, linhaça e abacate");
                            printf("\n\n   Aumente o consumo de pães, bolos, massas, mandioca, batata, milho e cereais (arroz, farinha de trigo, fubá, aveia),\n   lembrando sempre de optar pelas versões integrais");
                            printf("\n\n   Evite alimentos nas versões diet e light, baixo teor de gorduras, calorias reduzidas");
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
                            printf("\n\n   Estar dentro da faixa de peso normal significa ter um peso considerado adequado para sua altura, idade e sexo, de acordo com as faixas do IMC -\n   para manter o peso é importante manter uma dieta balanceada\n   (não basta alimentos corretos, mas também quantidades corretas) para seu organismo.\n\n   Pontos importantes para manter o peso:");
                            printf("\n\n   Não existe alimento 100%% bom ou 100%% ruim. Varie ao máximo o seu cardápio e não elimine completamente nenhum tipo de alimento. O equilíbrio entre a quantidade e a\n   freqüência com a qual você consome refeições mais calóricas é a garantia do seu sucesso");
                            printf("\n\n   Estabeleça uma rotina alimentar");
                            printf("\n\n   Analise os rótulos dos alimentos. Muitas vezes, os alimentos light contêm uma pequena diferença na quantidade calórica, que nem compensa a troca");
                            printf("\n\n   Praticar atividades físicas de forma regular");
                            printf("\n\n   Descanse e durma o suficiente");
                            printf("\n\n   Para ter uma alimentação saudável é importante que ela seja muito variada e conte com todos os grupos alimentares. Lembrando que produtos alimentares\n   como embutidos, bolachas recheadas, entre outros, não entram na conta");
                            printf("\n\n   Aumentar a ingestão de líquidos no dia (mínimo de 2L de água)");
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
                            printf("\n\n   O sobrepeso é uma condição em que a pessoa pesa mais do que é considerado adequado para aquela altura, idade e sexo. O sedentarismo e os maus hábitos alimentares\n   levam ao aumento dessa parcela de indivíduos com sobrepeso a cada ano. Essa faixa,\n   se analisada junto com outras medidas e índices, pode demonstrar um risco maior de doenças como diabetes tipo 2, dislipidemia\n   (com colesterol HDL baixo e triglicérides altos), ácido úrico aumentado, hipertensão, entre outras.");
                            printf("\n\n   O tratamento para o sobrepeso depende de sua causa. Contudo, manter bons hábitos alimentares e praticar atividades físicas são aliados contra o excesso de peso.\n   Em casos mais graves, a cirurgia bariátrica pode ser uma alternativa.\n   Dependendo da causa do excesso de peso, pode ser necessária a consulta com o psicólogo ou psiquiatra.\n   Os remédios para emagrecer, quando bem indicados e sempre com acompanhamento médico, podem ser úteis dependendo do caso.");
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
                            printf("\n\n   O tratamento é realizado através de dieta apropriada com avaliação médica junto com a prática de exercícios, desde que o paciente seja avaliado e liberado.\n   Além disso, é preciso que o paciente realize as atividades com o acompanhamento de um profissional de educação física.\n   Em alguns casos avaliados pelo médico, pode-se fazer o uso de remédios para emagrecer para ajudar no controle do peso.");
                            printf("\n\n   A cirurgia bariátrica também pode ser destinada ao tratamento.\n   É acompanhada de outras doenças cuja obesidade é um agravante ou doenças associadas ao excesso de gordura corporal.\n   Mas neste grau de obesidade, os outros meios do controle de peso são priorizados e a bariátrica só passa a ser considerada\n   quando as alternativas primárias são comprovadamente ineficazes.\n   Pacientes que têm IMC abaixo de 35, sem doenças associadas, devem sem dúvidas tentar o tratamento clínico antes, com chances de conseguir resultados razoáveis.");
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
                            printf("\n\n   Os riscos associados à obesidade de grau II são mais acentuados. Entre eles, estão a esteatose hepática, doenças articulares,\n   hipertensão, diabetes mellitus, síndrome metabólica,\n   cânceres, infarto agudo do miocárdio e acidente vascular cerebral, lembrando que estes dois últimos são as principais causas de morte no Brasil e no mundo.");
                            printf("\n\n   O tratamento desse quadro é dado através de mudanças no estilo de vida, associado ao tratamento multiprofissional com nutricionista, psicólogo e médico.\n   O uso de medicações para a perda de peso também é um método que pode ser proposto diante de avaliação e acompanhamento médico.");
                            printf("\n\n   Já a cirurgia bariátrica costuma ser indicada para obesidade grau II quando não há resultados no tratamento convencional\n   nos últimos dois anos e quando está associada a outras comorbidades,\n   ou seja, outras doenças que podem vir associadas ao excesso de peso, que levam a redução da expectativa e da qualidade de vida.");
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
                            printf("\n\n   Entre as patologias associadas à obesidade grau 3, estão os distúrbios hormonais, cardiopatias, morte súbita, dermatites, osteoporose, hipertensão, hepatopatias e insuficiência venosa.\n   Porém, segundo a Organização Mundial de Saúde (OMS), a obesidade de grau III é a principal causa de morte evitável do mundo.");
                            printf("\n\n   A associação de reeducação alimentar e atividade física têm melhores resultados a curto e médio prazo, porém, muitas vezes, em pacientes com obesidade grau III,\n   a atividade física acaba sendo bastante restrita, dependendo do grau de excesso de peso e das artropatias associadas.");
                            printf("\n\n   Nesses casos, esses pacientes podem optar por fazer a cirurgia de redução de estômago para controlar o peso e sair da obesidade.\n   Existem quatro técnicas diferentes de cirurgia bariátrica para obesidade reconhecidas pelo Conselho Federal de Medicina (CFM):\n\n\n   Banda Gástrica Ajustável, Gastrectomia Vertical, Bypass Gástrico e Derivação Bileopancreática.\n\n\n   A escolha da cirurgia dependerá do quadro do paciente, do grau de obesidade e das doenças relacionadas.");
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
                            printf("\n\n   Estar abaixo do peso é uma condição em que a pessoa pesa menos do que é considerado adequado para aquela altura, idade e sexo.");
                            printf("\n\n   Ao perder muito peso em um curto período de tempo, é preciso investigar a causa do emagrecimento.");
                            printf("\n\n   Unhas e cabelos secos e quebradiços\n   Pele seca\n   Incapacidade de se concentrar\n   Esquecimento\n   Exaustão\n   Irritabilidade\n   Perda de apetite\n   Dor nas articulações\n   Vertigem\n   Sensação de desmaio\n    Dores de cabeça");
                            printf("\n\n   Para ter um ganho de peso saudável, não se deve comer somente muitos alimentos calóricos e sim priorizar alguns alimentos com boa quantidade calórica,\n   mas ricos em nutrientes benéficos e com pouca quantidade de gordura saturada (de origem animal) e gordura trans (de industrializados).\n   Confira algumas estratégias interessantes que podem te ajudar nesse processo:");
                            printf("\n\n   Alimentos ricos em proteína são grandes aliados: dê preferência às carnes magras (alcatra, filé mignon, maminha, fraldinha), frango e principalmente peixes e ovos,\n   além de leite e queijos brancos como ricota e minas");
                            printf("\n\n   Aposte nas gorduras boas: amendoim, nozes, amêndoa, avelã, castanhas, azeite de oliva, linhaça e abacate");
                            printf("\n\n   Aumente o consumo de pães, bolos, massas, mandioca, batata, milho e cereais (arroz, farinha de trigo, fubá, aveia),\n   lembrando sempre de optar pelas versões integrais");
                            printf("\n\n   Evite alimentos nas versões diet e light, baixo teor de gorduras, calorias reduzidas");
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
                            printf("\n\n   Estar dentro da faixa de peso normal significa ter um peso considerado adequado para sua altura, idade e sexo, de acordo com as faixas do IMC -\n   para manter o peso é importante manter uma dieta balanceada\n   (não basta alimentos corretos, mas também quantidades corretas) para seu organismo.\n\n   Pontos importantes para manter o peso:");
                            printf("\n\n   Não existe alimento 100%% bom ou 100%% ruim. Varie ao máximo o seu cardápio e não elimine completamente nenhum tipo de alimento. O equilíbrio entre a quantidade e a\n   freqüência com a qual você consome refeições mais calóricas é a garantia do seu sucesso");
                            printf("\n\n   Estabeleça uma rotina alimentar");
                            printf("\n\n   Analise os rótulos dos alimentos. Muitas vezes, os alimentos light contêm uma pequena diferença na quantidade calórica, que nem compensa a troca");
                            printf("\n\n   Praticar atividades físicas de forma regular");
                            printf("\n\n   Descanse e durma o suficiente");
                            printf("\n\n   Para ter uma alimentação saudável é importante que ela seja muito variada e conte com todos os grupos alimentares. Lembrando que produtos alimentares\n   como embutidos, bolachas recheadas, entre outros, não entram na conta");
                            printf("\n\n   Aumentar a ingestão de líquidos no dia (mínimo de 2L de água)");
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
                            printf("\n\n   O sobrepeso é uma condição em que a pessoa pesa mais do que é considerado adequado para aquela altura, idade e sexo. O sedentarismo e os maus hábitos alimentares\n   levam ao aumento dessa parcela de indivíduos com sobrepeso a cada ano. Essa faixa,\n   se analisada junto com outras medidas e índices, pode demonstrar um risco maior de doenças como diabetes tipo 2, dislipidemia\n   (com colesterol HDL baixo e triglicérides altos), ácido úrico aumentado, hipertensão, entre outras.");
                            printf("\n\n   O tratamento para o sobrepeso depende de sua causa. Contudo, manter bons hábitos alimentares e praticar atividades físicas são aliados contra o excesso de peso.\n   Em casos mais graves, a cirurgia bariátrica pode ser uma alternativa.\n   Dependendo da causa do excesso de peso, pode ser necessária a consulta com o psicólogo ou psiquiatra.\n   Os remédios para emagrecer, quando bem indicados e sempre com acompanhamento médico, podem ser úteis dependendo do caso.");
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
                            printf("\n\n   O tratamento é realizado através de dieta apropriada com avaliação médica junto com a prática de exercícios, desde que o paciente seja avaliado e liberado.\n   Além disso, é preciso que o paciente realize as atividades com o acompanhamento de um profissional de educação física.\n   Em alguns casos avaliados pelo médico, pode-se fazer o uso de remédios para emagrecer para ajudar no controle do peso.");
                            printf("\n\n   A cirurgia bariátrica também pode ser destinada ao tratamento.\n   É acompanhada de outras doenças cuja obesidade é um agravante ou doenças associadas ao excesso de gordura corporal.\n   Mas neste grau de obesidade, os outros meios do controle de peso são priorizados e a bariátrica só passa a ser considerada\n   quando as alternativas primárias são comprovadamente ineficazes.\n   Pacientes que têm IMC abaixo de 35, sem doenças associadas, devem sem dúvidas tentar o tratamento clínico antes, com chances de conseguir resultados razoáveis.");
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
                            printf("\n\n   Os riscos associados à obesidade de grau II são mais acentuados. Entre eles, estão a esteatose hepática, doenças articulares,\n   hipertensão, diabetes mellitus, síndrome metabólica,\n   cânceres, infarto agudo do miocárdio e acidente vascular cerebral, lembrando que estes dois últimos são as principais causas de morte no Brasil e no mundo.");
                            printf("\n\n   O tratamento desse quadro é dado através de mudanças no estilo de vida, associado ao tratamento multiprofissional com nutricionista, psicólogo e médico.\n   O uso de medicações para a perda de peso também é um método que pode ser proposto diante de avaliação e acompanhamento médico.");
                            printf("\n\n   Já a cirurgia bariátrica costuma ser indicada para obesidade grau II quando não há resultados no tratamento convencional\n   nos últimos dois anos e quando está associada a outras comorbidades,\n   ou seja, outras doenças que podem vir associadas ao excesso de peso, que levam a redução da expectativa e da qualidade de vida.");
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
                            printf("\n\n   Entre as patologias associadas à obesidade grau 3, estão os distúrbios hormonais, cardiopatias, morte súbita, hipertensão, hepatopatias e insuficiência venosa.\n   Porém, segundo a Organização Mundial de Saúde (OMS), a obesidade de grau III é a principal causa de morte evitável do mundo.");
                            printf("\n\n   A associação de reeducação alimentar e atividade física têm melhores resultados a curto e médio prazo, porém, muitas vezes, em pacientes com obesidade grau III,\n   a atividade física acaba sendo bastante restrita, dependendo do grau de excesso de peso e das artropatias associadas.");
                            printf("\n\n   Nesses casos, esses pacientes podem optar por fazer a cirurgia de redução de estômago para controlar o peso e sair da obesidade.\n   Existem quatro técnicas diferentes de cirurgia bariátrica para obesidade reconhecidas pelo Conselho Federal de Medicina (CFM):\n\n\n   Banda Gástrica Ajustável, Gastrectomia Vertical, Bypass Gástrico e Derivação Bileopancreática.\n\n\n   A escolha da cirurgia dependerá do quadro do paciente, do grau de obesidade e das doenças relacionadas.");
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
                printf("\n\n   Valor não corresponde!\n\n");
            }
        }
        else
        {
            printf("\n\n  OK!\n\n");
            system("pause");
        }
    }while(conf2 == 's' || conf2 == 'S');
}
