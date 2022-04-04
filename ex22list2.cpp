#include <stdio.h>

int main()
{
    float sal, qtd, quilo, valor, nvalor, desc;
    printf("Digite o valor do salário mínimo: ");
    scanf("%f%*c",&sal);

    printf("Digite a quantidade de quilowatts consumida pela sua residência: ");
    scanf("%f%*c",&qtd);

    quilo = sal/5;
    printf("O valor de cada quilowatt é de R$ %f",quilo);

    nvalor = qtd*quilo;
    printf("O valor a ser pago pela residência será de R$ %f", nvalor);

    desc = (nvalor - (nvalor * .15));
    printf("O valor a ser pago com desconto será de R$ %f", desc);

    getchar();
    return 0;
}
