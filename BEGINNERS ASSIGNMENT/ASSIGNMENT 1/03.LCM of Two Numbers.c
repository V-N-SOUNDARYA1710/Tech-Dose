#include<stdio.h>
int main()
{
    int m,n,max;
    scanf("%d%d",&m,&n);
    max=(m>n)?m:n;
    while(1)
    {
        if(max%m==0 && max%n==0)
        {
            printf("The LCM is %d",max);
            break;
        }
        ++max;
    }
    return 0;
}
