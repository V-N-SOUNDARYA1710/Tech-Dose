#include<stdio.h>
int main()
{
    int N,flag=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        if(i*i==N)
        {
            flag=1;
            break;
        }
        else if(i*i>N)
        {
            break;
        }
    }
    if(flag)
    {
        printf("%d is a perfect square",N);
    }
    else
    {
        printf("%d is not a perfect square",N);
    }
}
