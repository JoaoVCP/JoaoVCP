#include <stdio.h>

int main()
{
    float peso, rforn, resto;

    printf("Qual é o peso do saco de ração? ");
    scanf("%f%*c",&peso);

    //Peso do saco de ração kg
    //2 gatos

    peso = peso * 1000;

    printf("Quantidade de racao fornecida em gramas? ");
    scanf("%f%*c",&rforn);

    resto = peso - ((rforn*2) * 5);

    printf("Após 5 dias restará %f",resto);

    getchar();
    return 0;
}
