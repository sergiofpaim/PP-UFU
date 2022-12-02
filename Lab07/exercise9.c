#include <stdio.h>
#include <string.h>
void main()
{
    char str[5][2] = {"Fusca", "Gol", "Vectra", "Fusion", "Renegade"}, {"5", "10", "8", "7", "12"};

    printf("\n\nO carro mais economico eh: ");

    for (int i = 0; i < strlen(str); i++)
        if (str[i] == l1)
            str[i] = l2;

    printf("\n\nDigite uma para substituir a letra previamente escrita: ");
    scanf(" %c", &l2);

    for (int i = 0; i < strlen(str); i++)
        if (str[i] == l1)
            str[i] = l2;

    printf("%s", str);
}