#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1, n2, r, score = 0, counter = 1;

    while (counter <= 5)
    {
        printf("Escolha 2 numeros inteiros menor que 100\n");
        scanf("%d", &n1);
        scanf("%d", &n2);
        printf("Digite sua soma\n");
        scanf("%d", &r);
        if (r == (n1 + n2))
        {
            score++;
            printf("Voce acertou a %da questao\n", counter);
        }
        else
            printf("Voce errou a %da questao\n", counter);

        counter++;
    }

    printf("Voce acertou %d questoes!", score);

    return 0;
}