#include <stdlib.h>
#include <stdio.h>
int main()
{
    int i, vector[10], j, k;

    printf("Digite 10 numeros inteiros\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vector[i]);
        for (j = 0; j < i; j++)
        {
            if (vector[i] == vector[j])
            {
                printf("\nNumero repetido, entre com outro.\n");
                i--;

                continue;
            }
        }
    }

    for (int i = 0; i < 10; i++)
        printf("%d\n", vector[i]);

    return 0;
}