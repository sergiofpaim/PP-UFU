#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, m;
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &n1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &n2);
    printf("Digite a nota da terceira prova: ");
    scanf("%f", &n3);

    m = (n1 + n2 + (n3 * 2)) / 4;

    printf("A nota do aluno foi: %f \n", m);
    if (m >= 60)
        printf("Aluno aprovado!");
    else
        printf("Aluno reprovado!");

    return 0;
}