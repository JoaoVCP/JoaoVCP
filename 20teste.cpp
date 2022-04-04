#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * exerc�cio 20
 * Josu� C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*Fa�a um programa que receba a medida do �ngulo formado por uma escada apoiada no ch�o e a dist�ncia que a escada est� da parede. Calcule e mostre a medida da escada para que se possa alcan�ar a ponta da escada. */

int main()
{
	// declara as vari�veis altura, anguloBase, anguloAltura, base, hipotenusa e coseno
	float altura, anguloBase, anguloAltura, base, hipotenusa;

    printf("\nRecebe a medida do �ngulo formado por uma escada apoiada no ch�o e a dist�ncia que a escada est� da parede.");
    printf("\nCalcula e mostra a medida da escada para que se possa alcan�ar a ponta da escada. \n");

	printf("\n�ngulo: ");
	scanf("%f", &anguloBase); // guarda o valor na vari�vel angulo

	printf("Dist�ncia: ");
	scanf("%f", &base); // guarda o valor em base

    hipotenusa = base / cos(anguloBase);
	if (hipotenusa < 0) // valida se a hipotenusa � um valor positivo
	{
		hipotenusa = hipotenusa * (-1);
	}

	altura = sqrt(pow(hipotenusa, 2) - pow(base, 2)); // calcula a altura
	anguloAltura = 180 - (90 + anguloBase);

	printf("\nA medida da escada � %.2f \n", hipotenusa);
	printf("A altura da escada � %.2f\n", altura);
	printf("Os tr�s �ngulos do tri�ngulo s�o: 90, %.2f e %.2f graus. \n\n", anguloBase, anguloAltura);

	return 0;
}
