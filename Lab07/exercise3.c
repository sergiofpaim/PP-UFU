#include <stdio.h>
#include <string.h>
void main()
{
    char str[20];
    printf("Digite uma palavra: ");
    gets(str);

    printf("A palavra digitada de tras para frente eh: ");

    for (int i = strlen(str); i >= 0; i--)
        printf("%c", str[i]);
}