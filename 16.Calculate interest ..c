#include<stdio.h>
int main()
{
    int I,P,R,N;
    printf("Enter Value of P:\n");
    printf("Enter Value of N:\n");
    printf("Enter Value of R:\n");
    scanf("%d %d %d",&P,&N,&R);
    I = (P*N*R)/100;
    printf("I = %d.\n",I);
    return 0;
}
