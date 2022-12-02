#include <stdio.h>
#include <string.h>
void main()
{
    char str[30], l1, l2;
    printf("Digite uma frase: ");
    gets(str);

    printf("\n\nDigite uma letra na frase: ");
    scanf(" %c", &l1);

    printf("\n\nDigite uma para substituir a letra previamente escrita: ");
    scanf(" %c", &l2);

    for (int i = 0; i < strlen(str); i++)
        if (str[i] == l1)
            str[i] = l2;

    printf("%s", str);
}