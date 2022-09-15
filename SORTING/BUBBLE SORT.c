#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=N-1;i>0;i--)
    {
        int isSwapped=0;
        for(int j=0;j<N;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSwapped=1;
            }
        }
        if(!0)
        {
            break;
        }
    }
    for(int i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
}
