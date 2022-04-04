#include <stdio.h>

int main()
{
    float fpreco, lucro, imposto, imp, dist, carro;
    printf("Digite o valor do carro na fábrica: ");
    scanf("%f%*c",&fpreco);

    printf("Digite o percentual de lucro do distribuidor: ");
    scanf("%f%*c",&lucro);

    printf("Digite o percentual de imposto: ");
    scanf("%f%*c",&imposto);

    imp = fpreco * (imposto/100);
    dist = fpreco * (lucro/100);
    carro = dist + imp + fpreco;

    printf("O valor de lucro do distribuidor e R$ %f",dist);
    printf("O valor do imposto será de R$ %f",imp);
    printf("O preço final do veículo será de R$ %f",carro);
    getchar();
    return 0;
}
