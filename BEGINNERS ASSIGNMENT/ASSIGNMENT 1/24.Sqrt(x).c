int mySqrt(int x)
{
    long int k=1;
    while(k*k<=x)
    {
        k++;
    }
    return k-1;
}
