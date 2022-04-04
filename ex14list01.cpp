#include <stdio.h>

int main()
{
    int nasc, atual, idade, id2050;
    printf("Qual o ano do seu nascimento? ");
    scanf("%i%*c",&nasc);

    printf("Qual o ano atual? ");
    scanf("%i%*c",&atual);

    idade = atual - nasc;
    id2050 = 2050 - nasc;

    printf("A sua idade é: %i\n",idade);
    printf("Em 2050 você terá: %i",id2050);

    getchar();
    return 0;
}
