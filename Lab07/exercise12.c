#include <stdio.h>
#include <string.h>
void main()
{
    char phrase[50];

    printf("Digite uma frase: ");
    gets(phrase);

    printf("A frase codificada eh:\n\n");

    for (int i = 0; i < strlen(phrase); i++)
    {
        if (phrase[i] >= 65 && phrase[i] <= 122)
            phrase[i] += 3;
    }

    printf("%s", phrase);
}