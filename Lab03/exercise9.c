#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    printf("Digite o salario de um trabalhador e o valor de um emprestimo entre virgulas e espacos: ");
    scanf("%f, %f", &n1, &n2);
    if (n2 <= n1 * 0.2)
        printf("Emprestimo concedido");
    else
        printf("Emprestimo nao concedido");

    return 0;
}