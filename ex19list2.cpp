#include <stdio.h>

int main()
{
    int dalt, altura, degraus;
    printf("Quanto tem de altura (em metros) cada degrau?");
    scanf("%i%*c",&dalt);

    printf("Qual altura (em metros) o usu�rio deseja alcan�ar?");
    scanf("%i%*c",&altura);

    degraus = altura/dalt;

    printf("Voc� dever� subir %i", degraus);
    printf("degraus para atingir seu objetivo");
    getchar();
    return 0;
}
