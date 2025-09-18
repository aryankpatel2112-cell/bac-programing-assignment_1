#include<stdio.h>
int main()
{
    int hours,minutes;
    printf("Enter time in minutes");
    scanf("%d",&minutes);
    hours = minutes / 60;
    printf("%d hours = %d / 60\n",hours,minutes);
    return 0;
}
