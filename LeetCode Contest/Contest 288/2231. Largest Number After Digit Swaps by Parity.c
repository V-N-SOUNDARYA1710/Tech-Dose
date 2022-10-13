int largestInteger(int num){
    int val[10];
    int size=0;
    for(;num!=0;size++)
    {
        val[size]=num%10;
        num/=10;
    }
    for(int i=size-1;i>0;i--)
    {
        if(val[i]%2==1)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(val[j]>val[i] && val[j]%2==1)
                {
                    int t=val[i];
                    val[i]=val[j];
                    val[j]=t;
                }
            }
        }
        else
        {
            for(int j=i-1;j>=0;j--)
            {
                if(val[j]>val[i] && val[j]%2==0)
                {
                    int t=val[i];
                    val[i]=val[j];
                    val[j]=t;
                }
            }
        }
    }
    int new=0;
    for(int i=0;i<size;i++)
    {
        new+=val[i]*pow(10,i);
    }
    return new;
}
