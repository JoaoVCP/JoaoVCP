#include <stdio.h>

int main()
{
    float smin, ht, vtb, sbruto, imposto, sreceber;
    printf("Digite a quantidade de horas trabalhadas ");
    scanf("%f%*c",&ht);

    printf("Digite o valor do sal�rio m�nimo ");
    scanf("%f%*c",&smin);

    vtb = (smin/2) * ht;
    sbruto = ht * vtb;
    imposto = 0.03 * sbruto;
    sreceber = sbruto - imposto;

    printf("O sal�rio a receber ser� de R$ %f", sreceber);
    getchar();
    return 0;
}
