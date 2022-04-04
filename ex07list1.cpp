#include <stdio.h>

int main ()
{
    float sal, nsal, n1sal;
    printf("Digite o valor do salário do funcionário ");
    scanf("%f%*c",&sal);

    n1sal = sal * 0.1;
    nsal = (sal + 50 - n1sal);

    printf("O salário do funcionário será R$ %3.2f",nsal);
    getchar();
    return 0;
}
