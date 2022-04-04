#include <stdio.h>
#include <math.h>

int main()
{
    float number, quad, cubo, raiz, raizc;
    printf("Digite um número positivo e maior que zero: ");
    scanf("%f%*c",&number);

    quad = pow(number, 2);
    cubo = pow(number, 3);
    raiz = sqrt(number);
    raizc = cbrt(number);

    printf("O número ao quadrado é: %f\n", quad);
    printf("O número digitado ao cubo é: %f\n", cubo);
    printf("A raiz quadrado do número digitado é: %f\n", raiz);
    printf("A raiz cúbica do número digitado é: %f\n", raizc);

    getchar();
    return 0;
}
