#include <stdio.h>
#include <math.h>

int main()
{
    float number, quad, cubo, raiz, raizc;
    printf("Digite um n�mero positivo e maior que zero: ");
    scanf("%f%*c",&number);

    quad = pow(number, 2);
    cubo = pow(number, 3);
    raiz = sqrt(number);
    raizc = cbrt(number);

    printf("O n�mero ao quadrado �: %f\n", quad);
    printf("O n�mero digitado ao cubo �: %f\n", cubo);
    printf("A raiz quadrado do n�mero digitado �: %f\n", raiz);
    printf("A raiz c�bica do n�mero digitado �: %f\n", raizc);

    getchar();
    return 0;
}
