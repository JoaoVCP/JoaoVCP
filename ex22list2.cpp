#include <stdio.h>

int main()
{
    float sal, qtd, quilo, valor, nvalor, desc;
    printf("Digite o valor do sal�rio m�nimo: ");
    scanf("%f%*c",&sal);

    printf("Digite a quantidade de quilowatts consumida pela sua resid�ncia: ");
    scanf("%f%*c",&qtd);

    quilo = sal/5;
    printf("O valor de cada quilowatt � de R$ %f",quilo);

    nvalor = qtd*quilo;
    printf("O valor a ser pago pela resid�ncia ser� de R$ %f", nvalor);

    desc = (nvalor - (nvalor * .15));
    printf("O valor a ser pago com desconto ser� de R$ %f", desc);

    getchar();
    return 0;
}
