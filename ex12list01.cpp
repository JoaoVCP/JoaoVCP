#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, elev;
    printf("Digite o primeiro n�mero maior que zero ");
    scanf("%f%*c",&num1);
    printf("Digite o segundo n�mero maior que zero ");
    scanf("%f%*c",&num2);

    elev = pow(num1, num2);

    printf("Um elevado ao outro ser� igual a: %f", elev);

    getchar();
    return 0;
}
