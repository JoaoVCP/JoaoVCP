#include <stdio.h>
#include <math.h>

int main()
{
    float num;
    printf("Digite um n�mero real: ");
    scanf("%f%*c",&num);

    float x = 0.0, y = 0.0;
    y = modf(num,&x);

    printf("A parte inteira do n�mero �: %f", x);
    printf("A parte fracion�rio do n�mero �: %f", y);
    printf("O arredondamento deste n�mero �: %f",ceil(num));

    getchar();
    return 0;
}

/*23. Fa�a um programa que receba um n�mero real,
encontre e mostre:a) a parte inteira desse n�mero;
b) a parte fracion�ria desse n�mero;
c) o arredondamento desse n�mero*/
