#include<stdio.h>
int main()
{
    float gross,net,deducation,allowance;
    printf("Enter the gross:");
    scanf("%f",&gross);
    deducation = 0.03 * gross;
    allowance = 0.1 * gross;
    net = gross + allowance - deducation;
    printf("gross = %f.\n",gross);
    printf("deducation = %f.\n",deducation);
    printf("allowance = %f.\n",allowance);
    printf("net = %f.\n",net);
    return 0;
}
