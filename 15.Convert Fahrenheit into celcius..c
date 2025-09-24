#include<stdio.h>
int main()
{
    int F,C;
    printf("Enter temprture in fahrenheit:");
    scanf("%d",&F);
    C = (5*F - 160) / 9;
    printf("C = %d.\n",C);
    return 0;
}
