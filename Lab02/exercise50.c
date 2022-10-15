#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int age, year, n;
    printf("Digite o ano atual: \n");
    scanf("%d", &year);
    printf("Digite sua idade");
    scanf("%d", &age);
    n = year - age;
    printf("Voce nasceu no ano: %d \n", n);

    return 0;
}