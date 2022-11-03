#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int year, month, maxmonth = 12, day, maxday, bis;

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

    // Calcula se o ano eh bissexto

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 11)
    {
        maxday = 31;
    }
    else if (month == 2)
    {
        if (bis == 1)
            maxday = 29;
        else
            maxday = 28;
    }
    else
        maxday = 30;

    // Calcula o numero maximo de dias por mes

    if (day > maxday || month > maxmonth)
        printf("Data invalida");
    else
        printf("Data valida");

    return 0;
}