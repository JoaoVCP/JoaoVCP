#include <stdio.h>

int main()
{
    int dalt, altura, degraus;
    printf("Quanto tem de altura (em metros) cada degrau?");
    scanf("%i%*c",&dalt);

    printf("Qual altura (em metros) o usuário deseja alcançar?");
    scanf("%i%*c",&altura);

    degraus = altura/dalt;

    printf("Você deverá subir %i", degraus);
    printf("degraus para atingir seu objetivo");
    getchar();
    return 0;
}
