int climbStairs(int n){
    return unique_Ways(n,0);
}
int unique_Ways(int n,int i)
{
    if(i>n)
    {
        return 0;
    }
    if(i==n)
    {
        return 1;
    }
    return unique_Ways(n,i+1)+unique_Ways(n,i+2);
}
