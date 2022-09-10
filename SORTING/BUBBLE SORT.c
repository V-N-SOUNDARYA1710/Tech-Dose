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
        bool isSwapped=false;
        for(int j=0;j<N;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSwapped=true;
            }
        }
        if(!isSwapped)
        {
            break;
        }
    }
    for(int i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
}
