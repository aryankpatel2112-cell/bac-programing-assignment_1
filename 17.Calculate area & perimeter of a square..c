#include<stdio.h>
int main()
{
    int A,P,l;
    printf("Enter the length of square :");
    scanf("%d",&l);
    A = l * l;
    P = 4 * l;
    printf("area = %d.\n",A);
    printf("perimeter = %d.\n",P);
    return 0;
}
