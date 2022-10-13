int countEven(int num){
    int count=0,sum=0,rem;
    for(int i=1;i<=num;i++)
    {
        int n_um=i;
        while(n_um!=0)
        {
            rem=n_um%10;
            sum+=rem;
            n_um=n_um/10;
        }
        if(sum%2==0)
        {
            count++;
        }
        sum=0;
    }
    return count;
}
