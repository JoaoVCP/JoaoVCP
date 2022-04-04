#include <stdio.h>
#include <math.h>

int main()
{
    float angulo, altura, rad, h;
    printf("Medida do ângulo (em graus)?");
    scanf("%f%*c",&angulo);

    printf("Altura da parede?");
    scanf("%f%*c",&altura);

    rad = angulo * (3.14/180);
    h = altura/sin(rad);

    printf("A escada tem em em metros: %f",h);
    getchar();
    return 0;
}
