#include <stdio.h>

int main()
{
    float pes, pol, jar, mil;
    printf("Digite sua medida em pés: ");
    scanf("%f%*c",&pes);

    pol = 12 * pes;
    jar = pes/3; // 1 = 3 pes
    mil = pes/5280;

    printf("Passando para polegadas da: %f\n",pol);
    printf("Passando para jardas da: %f\n",jar);
    printf("Passando para milhas da: %f\n",mil);
    getchar();
    return 0;
}
