#include <stdio.h>
#include <string.h>
void main()
{
    char name[30];
    int value, discount;

    printf("Digite o nome da mercadoria: ");
    gets(name);

    printf("Digite o valor da mercadoria: ");
    scanf("%d", &value);

    discount = value * 0.1;

    printf("\nNome: %s\nValor total: %d\nValor Desconto: %d\nValor a Vista: %d", name, value, discount, (value - discount));
}