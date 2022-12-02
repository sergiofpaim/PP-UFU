#include <string.h>
#include <stdio.h>
void main()
{
    int count = 0;
    char str[10];
    printf("Digite zeros e uns: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++)
        if (str[i] == '1')
            count++;

    printf("O numero de 1 digitados eh: %d", count);
}