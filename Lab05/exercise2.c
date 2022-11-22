#include <stdio.h>

void showDate(int day, int month, int year);

int main()
{
    int day, month, year;
    printf("Digite o dia atual: ");
    scanf("%d", &day);
    printf("Digite o mes atual: ");
    scanf("%d", &month);
    printf("Digite o ano atual: ");
    scanf("%d", &year);

    showDate(day, month, year);

    return 0;
}

void showDate(int day, int month, int year)
{
    printf("%d de ", day);

    switch (month)
    {
    case 1:
        printf("janeiro de ");
        break;
    case 2:
        printf("fevereiro de ");
        break;
    case 3:
        printf("marco de ");
        break;
    case 4:
        printf("abril de ");
        break;
    case 5:
        printf("maio de ");
        break;
    case 6:
        printf("junho de ");
        break;
    case 7:
        printf("julho de ");
        break;
    case 8:
        printf("agosto de ");
        break;
    case 9:
        printf("setembro de ");
        break;
    case 10:
        printf("outubro de ");
        break;
    case 11:
        printf("novembro de ");
        break;
    case 12:
        printf("dezembro de ");
        break;
    }

    printf("%d", year);
}