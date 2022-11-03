#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int year, month, day, bis;

    printf("Digite um dia: ");
    scanf("%d", &day);
    printf("Digite um mes: ");
    scanf("%d", &month);
    printf("Digite um ano: ");
    scanf("%d", &year);

    if ((year % 400) == 0)
        bis = 1;
    else if ((year % 4) == 0 && (year % 100) != 0)
        bis = 1;

    if (month > 12)
        printf("Data invalida");
    else if (bis == 0 && month == 2 && day > 28)
        printf("Data invalida");
    else if (bis == 1 && month == 2 && day > 29)
        printf("Data invalida");
    else if (month % 2 == 0 && month <= 7 && day > 30)
        printf("Data invalida");
    else if (month % 2 != 0 && month <= 7 && day > 31)
        printf("Data invalida");
    else if (month % 2 != 0 && month >= 8 && day > 30)
        printf("Data invalida");
    else if (month % 2 == 0 && month >= 8 && day > 31)
        printf("Data invalida");
    else
        printf("Data valida");

    return 0;
}