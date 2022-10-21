#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    printf("Digite duas notas de um aluno entre virgulas e espacos: ");
    scanf("%f, %f", &n1, &n2);
    if (n1 <= 10 && n1 >= 0 && n2 <= 10 && n2 >= 0)
        printf("A media eh: %f", (n1 + n2) / 2);
    else
        printf("As notas devem estar num intervalo entre 0 e 10");

    return 0;
}