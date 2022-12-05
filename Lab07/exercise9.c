#include <stdio.h>
#include <string.h>
void main()
{
    char str[8][8] = {"Fusca", "Gol", "Vectra", "Fusion", "Renegade"};
    int arr[5] = {5, 10, 8, 7, 12}, temp = 0;

    printf("\n\nO carro mais economico eh: ");

    for (int i = 0; i < 5; ++i)
        if (arr[temp] < arr[i])
            temp = i;

    for (int i = 0; i < 5; i++)
        if (i == temp)
            printf("%s", str[i]);
}