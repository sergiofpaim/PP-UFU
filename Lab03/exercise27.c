#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float age;

    printf("Digite a idade de um nadador: ");
    scanf("%f", &age);

    printf("Nadador categoria ");

    if (age >= 5 && age <= 7)
        printf("infantil A");
    else if (age >= 8 && age <= 10)
        printf("infantil B");
    else if (age >= 11 && age <= 13)
        printf("juvenil A");
    else if (age >= 14 && age <= 17)
        printf("juvenil B");
    else
        printf("maiores de 18 anos");

    return 0;
}