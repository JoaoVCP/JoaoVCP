#include <stdio.h>

int main()
{
    float fpreco, lucro, imposto, imp, dist, carro;
    printf("Digite o valor do carro na f�brica: ");
    scanf("%f%*c",&fpreco);

    printf("Digite o percentual de lucro do distribuidor: ");
    scanf("%f%*c",&lucro);

    printf("Digite o percentual de imposto: ");
    scanf("%f%*c",&imposto);

    imp = fpreco * (imposto/100);
    dist = fpreco * (lucro/100);
    carro = dist + imp + fpreco;

    printf("O valor de lucro do distribuidor e R$ %f",dist);
    printf("O valor do imposto ser� de R$ %f",imp);
    printf("O pre�o final do ve�culo ser� de R$ %f",carro);
    getchar();
    return 0;
}
