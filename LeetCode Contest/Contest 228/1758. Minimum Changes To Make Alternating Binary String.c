int minOperations(char * s)
{
    int count=0,rcount=0;
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if((i&1)==0 && s[i]=='1') 
            count++;
        else if((i&1)==1 && s[i]=='0') 
            count++;
        else 
            rcount++;
        }
        return (count<=rcount)?count:rcount;
}
