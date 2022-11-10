#include <stdio.h>

int main()
{
    int n1, n2 = 0, counter1, counter2 = 1;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Escolha quantos numeros primeiros primos deseja encontrar: ");
    scanf("%d", &n2);

    for (counter1 = 1; counter1 < n1; counter1++)
        if ((counter1 % 2) != 0 && counter2 <= n2)
        {
            printf("%d\n", counter1);
            counter2++;
        }

    return 0;
}