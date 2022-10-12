int minimumMoves(char * s)
{
    int ans=0,index=0;
    int len=strlen(s);
    while(index<len)
    {
        if(s[index++]=='X')
        {
            ans++;
            index+=2;
        }
    }
    return ans;
}
/*Input: s = "XXX"
Output: 1
Explanation: XXX -> OOO
We select all the 3 characters and convert them in one move.*/
