#include <stdio.h>

int main()
{
    float dep, juros, ren, total;

    printf("Digite o valor do depósito: ");
    scanf("%f%*c",&dep);

    printf("Digite o valor da taxa de juros: ");
    scanf("%f%*c",&juros);

    ren = dep * (juros/100);

    printf("O valor do seu rendimento é R$ %f",ren);

    total = dep + ren;

    printf("O valor total depois do depósito será de: R$ %f",total);

    getchar();
    return 0;
}
