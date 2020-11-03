#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour, min, sec;

    printf("Enter time in seconds: ");
    scanf("%d", &sec);

    hour = (sec/3600);
    min = (sec - (3600*hour))/60;
    sec = (sec - (3600*hour) - (min*60));

    printf("7890 seconds = %d hours : %d minutes : %d seconds", hour, min, sec);

    return 0;
}
