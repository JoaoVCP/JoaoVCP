#include <stdio.h>
#include <math.h>

int main ()
{
    float raio, area;

    printf("Qual o valor do raio? ");
    scanf("%f%*c",&raio);

    area = 3.14*pow(raio, 2.0);
    printf("O valor da �rea do c�rculo � igual a %f", area);
    getchar();
    return 0;
}
