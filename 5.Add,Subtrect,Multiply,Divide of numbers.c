#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("addition:%d + %d = %d\n",a,b,a+b);
    printf("subtraction:%d - %d = %d\n",a,b,a-b);
    printf("multiplication:%d * %d = %d\n",a,b,a*b);
           if(b != 0)
           {
            printf("division:%d / %d = %d\n",a,b,a/b);
           }
           else
           {
            printf("division is not posible");
           }
           return 0;
}
