#include <stdio.h>

int main()
{
    float peso, rforn, resto;

    printf("Qual � o peso do saco de ra��o? ");
    scanf("%f%*c",&peso);

    //Peso do saco de ra��o kg
    //2 gatos

    peso = peso * 1000;

    printf("Quantidade de racao fornecida em gramas? ");
    scanf("%f%*c",&rforn);

    resto = peso - ((rforn*2) * 5);

    printf("Ap�s 5 dias restar� %f",resto);

    getchar();
    return 0;
}
