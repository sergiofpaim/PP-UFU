#include <stdio.h>
#include <string.h>
void main()
{
    char str[10];
    printf("Digite uma palavra: ");
    gets(str);

    printf("A palavra digitada convertida para maiuscula eh: ");

    for (int i = 0; i < strlen(str); i++)
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;

    printf("%s", str);
}