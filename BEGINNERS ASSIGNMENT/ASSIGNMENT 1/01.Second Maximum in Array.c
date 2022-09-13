#include<stdio.h>
#include<limits.h>
#define MAX_SIZE 1000
int main()
{
    int arr[MAX_SIZE],first,second;
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    first=second=INT_MIN;
    for(int i=0;i<N;i++)
    {
        if(arr[i]>first)
        {
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]<first)
        {
            second=arr[i];
        }
    }
    printf("The second largest element in an array is %d",second);
    return 0;
}
