#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n, f;
    char c;

    printf("Digite a nota de um aluno: ");
    scanf("%f", &n);
    printf("Digite o seu numero de faltas: ");
    scanf("%f", &f);

    if (f <= 20)
    {
        if (n <= 3.9)
            c = 'E';
        else if (n <= 4.9)
            c = 'D';
        else if (n <= 7.4)
            c = 'C';
        else if (n <= 8.9)
            c = 'B';
        else if (n <= 10)
            c = 'A';
    }
    else
    {
        if (n <= 3.9)
            c = 'E';
        else if (n <= 4.9)
            c = 'E';
        else if (n <= 7.4)
            c = 'D';
        else if (n <= 8.9)
            c = 'C';
        else if (n <= 10)
            c = 'B';
    }

    printf("Aluno conceito: %c", c);
}