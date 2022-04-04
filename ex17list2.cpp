#include <stdio.h>

int main()
{
    float dep, cpmf, cheques, saldo;
    printf("Digite o valor a ser depositado ");
    scanf("%f%*c",&dep);

    printf("Quantos cheques foram emitidos? ");
    scanf("%f%*c",&cheques);

    cpmf = dep * 0.0038;
    saldo = dep - (cpmf * cheques);

    printf("O saldo atual da conta é R$ %f",saldo);

    getchar();
    return 0;
}
