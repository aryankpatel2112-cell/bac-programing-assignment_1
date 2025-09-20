#include<stdio.h>
int main()
{
    int kg,gm;
    printf("Enter mass in kg:");
    scanf("%d",&kg);
    gm = 1000 * kg ;
    printf("gm = %d * 1000 = %d\n",kg,gm);
    return 0;
}
