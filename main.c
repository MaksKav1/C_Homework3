#include <stdio.h>

int main()
{
    int seconds = 10000;
    int hours;
    int minutes;
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    printf("Временной интервал: %d секунд.\n", seconds);
    printf("Количество полных часов: %d.\n", hours);
    printf("Количество минут: %d.\n", minutes);
    return 0;
}
