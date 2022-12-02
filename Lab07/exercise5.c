#include <stdio.h>
#include <string.h>
void main()
{
    char str[10];
    printf("Digite uma palavra: ");
    gets(str);

    printf("A palavra digitada convertida para minusculas: ");

    for (int i = 0; i < strlen(str); i++)
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;

    printf("%s", str);
}