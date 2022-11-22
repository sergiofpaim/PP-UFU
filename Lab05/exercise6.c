#include <stdio.h>
#include <math.h>

int convertToSeconds(int hours, int mins, int sec);

int main()
{
    int hours, mins, sec;

    printf("Digite a hora: ");
    scanf("%d", &hours);
    printf("Digite o minuto: ");
    scanf("%d", &mins);
    printf("Digite os segundos: ");
    scanf("%d", &sec);

    printf("O total de segundos eh: %d", convertToSeconds(hours, mins, sec));

    return 0;
}

int convertToSeconds(int hours, int mins, int sec)
{
    int convertedSeconds;

    convertedSeconds = sec + (mins * 60) + (hours * 3600);

    return convertedSeconds;
}