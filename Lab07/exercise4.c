#include <stdio.h>
#include <string.h>
void main()
{
    int count = 0;
    char str[10], chosenChar;
    printf("Digite uma palavra: ");
    gets(str);

    printf("Digite uma letra para substituir as vogais: ");
    scanf("%c", &chosenChar);

    for (int i = strlen(str); i >= 0; i--)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
            str[i] = chosenChar;
        }

    printf("\n\nO numero de vogais eh: %d\n", count);
    printf("A palavra convertida eh: %s", str);
    a
}