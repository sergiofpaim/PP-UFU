#include <stdio.h>
#include <string.h>
void main()
{
    char str[30];
    int num[2], values;

    printf("Digite uma palavra: ");
    gets(str);

    for (int i = 0; i < 2; i++)
    {
        printf("Digite o %do numero inteiro nao negativo: ", i + 1);
        scanf("%d", &values);
        num[i] = values;
    }

    for (int i = num[0]; i < num[1]; i++)
        printf("%c", str[i]);
}