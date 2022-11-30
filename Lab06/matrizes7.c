#include <stdlib.h>
#include <stdio.h>
int main()
{
    int matrix[5][5], count = 0, keep = 0, temp;
    const int min = 0, max = 99;

    printf("BINGO\n\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            temp = rand() % (max + 1 - min) + min;

            while (keep == 0)
            {
                for (int k = 0; k < i; k++)
                    for (int l = 0; l < j; l++)
                        if (matrix[k][l] == temp)
                            count++;

                if (count == 0)
                {
                    matrix[i][j] = temp;
                    keep++;
                }
            }
            count = 0;
            keep = 0;

            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}