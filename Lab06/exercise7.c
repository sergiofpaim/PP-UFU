#include <stdio.h>

void main()
{
    int value;
    int vector[10];

    printf("Digite 10 valores sem repeti-los no vetor\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
            if (vector[i] != vector[j])
            {
                scanf("%d", &value);
                vector[i] = value;
            }
            else
                printf("Digite outro numero");
    }
}
