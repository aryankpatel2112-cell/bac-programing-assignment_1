#include<stdio.h>
int main()
{
    float P,C,M,Totel,Average;
    //Marks of maths = M
    //Marks of physics = P
    //Marks of chemistry = C
    printf("Enter marks of physics");
    printf("Enter marks of chemistry");
    printf("Enter marks of maths");
    scanf("%f %f %f",&P,&C,&M);
    Totel = P + C + M;
    Average = Totel/3;
    if(P<35 ||
        M<35 || C<35)
        {
        printf("You are fail");
        }
    else if(P>100 || C>100 || M>100)
        {
        printf("Error in any subject marks");
        }
    else
        {
    printf("Totel = %f.\n",Totel);
    printf("Average = %f %.\n",Average);
        }
    return 0;
}
