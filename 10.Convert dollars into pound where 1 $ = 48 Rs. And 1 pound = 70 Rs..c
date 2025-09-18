#include<stdio.h>
int main()
{
    int ruppy,doller,pound;
    printf("Enter amount in doller :");
    scanf("%d",&doller);
    ruppy = 48 * doller;
    pound = ruppy / 70;
    printf("ruppy = %d * 48 = %d,pound = %d/70 = %d.\n",doller,ruppy,ruppy,pound);
    return 0;
}
