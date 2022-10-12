bool checkString(char * s)
{
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='b' && s[i+1]=='a')
        {
            return 0;
        }
    }
    return 1;
}
