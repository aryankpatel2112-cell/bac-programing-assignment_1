#include<stdio.h>
int main()
{
    int hours,minutes;
    printf("enter time in hours");
    scanf("%d",&hours);
    minutes = hours * 60;
    printf("%d = %d * 60\n",minutes,hours);
    return 0;
}
