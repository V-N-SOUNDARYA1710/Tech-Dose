#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,A1,B1,C1,A2,B2,C2,side,area;
    scanf("%f%f%f",&A1,&B1,&C1);
    scanf("%f%f%f",&A2,&B2,&C2);
    A=sqrt(((B1-A1)*(B1-A1))+((B2-A2)*(B2-A2)));
    B=sqrt(((C1-B1)*(C1-B1))+((C2-B2)*(C2-B2)));
    C=sqrt(((A1-C1)*(A1-C1))+((A2-C2)*(A2-C2)));
    side=((A+B+C)/2);
    area=sqrt(side*(side-A)*(side-B)*(side-C));
    printf("The area is %.2f",area);
}
