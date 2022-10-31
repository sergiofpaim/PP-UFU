#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, t, r;

    printf("Insira a idade de um trabalhador: ");
    scanf("%d", &age);

    printf("Insira o seu tempo de servico: ");
    scanf("%d", &t);

    if (age >= 65)
        r = 1;
    else if (t >= 30)
        r = 1;
    else if (age >= 60 && t >= 25)
        r = 1;

    if (r == 1)
        printf("O trabalhador pode se aposentar");
    else
        printf("O trabalhador nao pode se aposentar");

    return 0;
}