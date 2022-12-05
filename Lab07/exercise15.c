#include <stdio.h>
#include <string.h>
void main()
{
    char phrase1[50], phrase2[50], phraseR[100];
    int number, length;

    printf("Digite uma frase: ");
    gets(phrase1);
    printf("Digite uma frase: ");
    gets(phrase2);

    printf("Um numero inteiro: ");
    scanf("%d", &number);

    length = strlen(phrase1);

    for (int i = 0; i < number; i++)
        if (i == number)
            phrase1[length + i] = "\0";
        else
            phrase1[length + i] = phrase2[i];

    printf("%s", phrase1);
}