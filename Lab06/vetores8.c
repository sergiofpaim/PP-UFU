#include <stdlib.h>
#include <stdio.h>
int main()
{
    int i, j, vector[10];

    printf("Digite 10 numeros inteiros\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vector[i]);
        for (j = 0; j < i; j++)
        {
            if (vector[i] == vector[j])
            {
                printf("Numero repetido, entre com outro.\n");
                i--;

                continue;
            }
        }
    }

    printf("Os numeros foram\n");
    for (int i = 0; i < 10; i++)
        printf("%d  ", vector[i]);

    return 0;
}