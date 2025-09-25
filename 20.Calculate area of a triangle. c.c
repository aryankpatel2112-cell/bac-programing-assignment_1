#include<stdio.h>
int main()
{
    int A,b,h;
    printf("enter the hight of perpendicular of triangle:");
    printf("enter the base of triangle:");
    scanf("%d %d",&h,&b);
    A = (h * b) / 2;
    printf("area = %d.\n",A);
    return 0;
}
