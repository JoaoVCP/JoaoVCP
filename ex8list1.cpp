#include <stdio.h>

int main()
{
    float dep, juros, ren, total;

    printf("Digite o valor do dep�sito: ");
    scanf("%f%*c",&dep);

    printf("Digite o valor da taxa de juros: ");
    scanf("%f%*c",&juros);

    ren = dep * (juros/100);

    printf("O valor do seu rendimento � R$ %f",ren);

    total = dep + ren;

    printf("O valor total depois do dep�sito ser� de: R$ %f",total);

    getchar();
    return 0;
}
