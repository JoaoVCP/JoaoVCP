#include <stdio.h>

int main ()
{
    float sal, nsal, n1sal, n2sal;

    printf("Digite o valor do salario ");
    scanf("%f%*c",&sal);

    n1sal = (sal * 0.05);
    n2sal = (sal * 0.07);
    nsal = (sal + n1sal - n2sal);

    printf("O salario novo é %f", nsal);

    getchar();
    return 0;
}
