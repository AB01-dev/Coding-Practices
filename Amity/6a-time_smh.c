#include <stdio.h>
int main()
{

    int time;
    printf("Enter time in seconds: ");
    scanf("%d", &time);

    int hour, minute, second;
    hour = time / 3600;
    minute = (time - (3600 * hour)) / 60;
    second = (time - (3600 * hour) - (minute * 60));
    printf("%d:%d:%d\n", hour, minute, second);

return 0;
}