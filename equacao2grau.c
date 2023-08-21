#include<stdio.h>
#include<locale.h>

void main()
{
/*
2.  Dados A, B e C coeficientes de uma equa��o de 2 grau, imprima suas ra�zes.
*/
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    int continuar, num[3], delta;
    float raiz[2];

    //Loop para repetir o programa
    do
    {
        //Entrada de dados
        do
        {
            printf("Digite o coeficiente A da equa��o de segundo grau: \n");
            scanf("%d",&num[0]);

            if (num[0] == 0)
            {
                printf("Tem que ser uma equa��o de segundo grau, ou seja, A n�o pode ser 0! \n");
                printf("\n");//Pula a linha
            }
        }
        while(num[0] == 0);

        printf("Digite o coeficiente B da equa��o de segundo grau: \n");
        scanf("%d",&num[1]);

        printf("Digite o coeficiente C da equa��o de segundo grau: \n");
        scanf("%d",&num[2]);

        printf("\n");//Pula a linha


        //Exibe a equa��o com base nos coeficientes digitados.
        printf("Sua equa��o de segundo grau �: (%dx^2) + (%dx) + (%d) \n", num[0], num[1], num[2]);//ax^2 + bx + c

        printf("\n");//Pula a linha


        //C�lculo do Delta
        delta = pow(num[1], 2) - 4 * num[0] * num[2];//delta = (b ^ 2) - 4 * a * c


        //Verifica o valor de delta para poder calcular a ra�z
        if (delta < 0)//Menor que zero, n�o h� raiz
        {
            printf("N�o h� ra�zes reais! \n");
            printf("\n");//Pula a linha
        }
        else if (delta == 0)//Quando zero, raiz �nica
        {
            raiz[0] = - num[1] / (2 * num[0]);//x = -b / 2 * a

            //Exibi��o
            printf("A ra�z da equa��o �: %.2f \n", raiz[0]);
            printf("\n");//Pula a linha
        }
        else
        {
            raiz[0] = (- num[1] + sqrt(delta))/(2 * num[0]);//x1 = (-b + sqrt(delta)) / 2 * a
            raiz[1] = (- num[1] - sqrt(delta))/(2 * num[0]);//x2 = (-b - sqrt(delta)) / 2 * a

            //Exibi��o
            printf("As ra�zes da equa��o s�o: %.2f e %.2f \n", raiz[0], raiz[1]);
            printf("\n");//Pula a linha
        }


        //Loop para validar a sa�da do programa
        do
            {
                printf("Se deseja continuar, digite '1'. \n");
                printf("Se deseja sair, digite '0'. \n");
                scanf("%d",&continuar);
            }
        while(continuar !=0 && continuar !=1);//Verifica se o n�mero � diferente de 0 e 1



        system("cls");//Limpa a tela
    }
    while(continuar==1);//Programa reinicia se a variaver 'continuar' ter valor 1
}