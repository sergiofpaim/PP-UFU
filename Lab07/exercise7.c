#include <stdio.h>
#include <string.h>
void main()
{
    char str[30];
    printf("Digite uma frase: ");
    gets(str);

    printf("A frase digitada sem espacos eh: ");

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
            i++;
        printf("%c", str[i]);
    }
}