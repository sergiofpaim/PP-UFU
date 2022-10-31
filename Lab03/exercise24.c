#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float n1, r;

    printf("Digite o valor do produto: ");
    scanf("%f", &n1);

    printf("Escolha um estado, sendo 1 para MG, 2 para SP, 3 para RJ e 4 para MS: \n");
    scanf("%d", &choice);

    if (choice < 1 || choice > 4)
        printf("Escolha invalida");

    switch (choice)
    {
    case 1:
        r = (n1 + (n1 * 0.07));
        break;
    case 2:
        r = (n1 + (n1 * 0.12));
        break;
    case 3:
        r = n1 + (n1 * 0.15);
        break;
    case 4:
        r = (n1 + (n1 * 0.08));
        break;
    }

    printf("O valor final eh: %f", r);

    return 0;
}