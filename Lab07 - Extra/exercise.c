#include <stdio.h>
void main()
{
    char phrase[50];
    printf("Digite uma frase: ");
    fgets(phrase, 50, stdin);

    printf("A frase convertida fica:\n");

    for (int i = 0; i < strlen(phrase) - 1; i++)
        for (int j = i + 1; j < i + 2; j++)
        {
            if (phrase[i] == 'r')
            {
                phrase[i] = 'l';
                if (phrase[j] == 'r')
                {
                    phrase[j] = 'l';
                    i++;
                    j++;
                }
            }
            if (phrase[i] == 'R')
                phrase[i] = 'L';

            printf("%c", phrase[i]);
        }
}