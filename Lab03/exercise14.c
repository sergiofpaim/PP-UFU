#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, m;
    printf("Digite a nota do trabalho de laboratorio: ");
    scanf("%f", &n1);
    printf("Digite a nota da avaliacao trimestral : ");
    scanf("%f", &n2);
    printf("Digite a nota do exame final: ");
    scanf("%f", &n3);

    m = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

    printf("A nota do aluno foi: %f \n", m);
    if (m >= 0 && m <= 2.9)
        printf("Aluno reprovado!");

    else if (m >= 3 && m <= 4.9)
        printf("Aluno de recuperacao!");

    else
        printf("Aluno aprovado!");

    return 0;
}