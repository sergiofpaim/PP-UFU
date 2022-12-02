#include <stdio.h>
void main()
{
    char str[10];
    printf("Digite uma palavra: ");
    gets(str);

    printf("A palavra digitada eh: %s", str);
}