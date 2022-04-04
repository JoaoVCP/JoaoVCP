#include <stdio.h>
#include <math.h>

int main()
{
    float num;
    printf("Digite um número real: ");
    scanf("%f%*c",&num);

    float x = 0.0, y = 0.0;
    y = modf(num,&x);

    printf("A parte inteira do número é: %f", x);
    printf("A parte fracionário do número é: %f", y);
    printf("O arredondamento deste número é: %f",ceil(num));

    getchar();
    return 0;
}

/*23. Faça um programa que receba um número real,
encontre e mostre:a) a parte inteira desse número;
b) a parte fracionária desse número;
c) o arredondamento desse número*/
