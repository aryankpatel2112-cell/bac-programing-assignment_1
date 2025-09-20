#include<stdio.h>
int main()
{
    int kg,gm;
    printf("Enter mass in gm:");
    scanf("%d",&gm);
    kg = gm / 1000;
    printf("kg = %d/1000 = %d.\n",gm,kg);
    return 0;
}
