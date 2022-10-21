#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    printf("Digite dois numeros entre virgulas e espacos: ");
    scanf("%f, %f", &n1, &n2);
    if (n1 > n2)
        printf("O primeiro numero eh maior que o segundo");
    else if (n1 < n2)
        printf("O segundo numero eh maior que o primeiro");
    else
        printf("Numeros iguais");

    return 0;
}