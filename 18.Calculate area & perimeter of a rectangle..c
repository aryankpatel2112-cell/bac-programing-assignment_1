#include<stdio.h>
int main()
{
    int A,P,l,b;
    printf("Enter the length of rectangle:\n");
    printf("Enter the brith of rectangle:");
    scanf("%d %d",&l,&b);
    A = l * b;
    P = 2*l + 2*b;
    printf("area = %d.\n",A);
    printf("perimeter = %d.\n",P);
    return 0;
}
