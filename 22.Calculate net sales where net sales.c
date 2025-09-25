#include<stdio.h>
int main()
{
    float net,gross,discount;
    printf("Enter the gross:");
    scanf("%f",&gross);
    discount = 0.1*gross;
    net = gross - discount;
    printf("gross = %f.\n",gross);
    printf("discount = %f.\n",discount);
    printf("net prise = %f.\n",net);
    return 0;
}
