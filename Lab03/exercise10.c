#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s;
    float h;
    printf("Digite o sexo de um individuo com f ou m: ");
    scanf("%c", &s);
    printf("Digite a sua altura em metros: ");
    scanf("%f", &h);
    if (s == "f")
        printf("O peso ideal eh: %f", (72.7 * h) - 58);
    else
        printf("O peso ideal eh: %f", (62.1 * h) - 44.7);

    return 0;
}