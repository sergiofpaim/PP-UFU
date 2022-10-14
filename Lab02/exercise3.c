#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2, number3, result;
    printf("Digite 3 numeros inteiros com espaços entre eles: ");
    scanf("%d %d %d", &number1, &number2, &number3);
    result = (number1 + number2) + number3;
    printf("A soma destes numeros e: %d", result);

    return 0;
}