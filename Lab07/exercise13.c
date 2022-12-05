#include <stdio.h>
#include <string.h>
void main()
{
    char phrase[50];
    int length, flag = 0, jump = 0;

    printf("Digite uma frase: ");
    gets(phrase);

    length = strlen(phrase);

    // Conversao de todas as letras para minuscula
    for (int i = 0; i < strlen(phrase); i++)
        if (phrase[i] >= 65 && phrase[i] <= 90)
            phrase[i] += 32;

    // Confere se e palindromo
    for (int i = 0; i < (length / 2); i++)
    {
        if ((phrase[i]) < 65 || phrase[i] > 122)
            jump++;
        if (phrase[i + jump] != phrase[length - i - 1])
        {
            flag = 1;
            break;
        }
    }

    printf("A frase ");
    if (flag)
        printf("nao eh um palindromo");
    else
        printf("eh um palindromo");
}