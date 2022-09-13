#include<stdio.h>
int fact(int N)
{
    if(N==0 || N==1)
    {
        return 1;
    }
    else
    {
        return N*fact((N-1));
    }
}
int main()
{
    int N;
    scanf("%d",&N);
    printf("The factorial of a number is %d",fact(N));
    return 0;
}
