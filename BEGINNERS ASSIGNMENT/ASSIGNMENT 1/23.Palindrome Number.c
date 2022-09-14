

bool isPalindrome(int x){
    long n;
    long c;
    long sum=0;
    c=x;
    while(x>0)
    {
        n=x%10;
        sum=(sum*10)+n;
        x=x/10;
    }
    if(c==sum)
        return true;
    else
        return false;

}
