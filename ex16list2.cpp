#include <stdio.h>

int main()
{
    float smin, ht, vtb, sbruto, imposto, sreceber;
    printf("Digite a quantidade de horas trabalhadas ");
    scanf("%f%*c",&ht);

    printf("Digite o valor do salário mínimo ");
    scanf("%f%*c",&smin);

    vtb = (smin/2) * ht;
    sbruto = ht * vtb;
    imposto = 0.03 * sbruto;
    sreceber = sbruto - imposto;

    printf("O salário a receber será de R$ %f", sreceber);
    getchar();
    return 0;
}
