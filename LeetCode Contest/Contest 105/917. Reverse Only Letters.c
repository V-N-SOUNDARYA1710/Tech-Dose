char * reverseOnlyLetters(char *S)
{
    char *s=S;
    char *e=s+strlen(S)-1;
    while(s<e)
    {
        if(!isalpha(*s))
        {
            s++;
            continue;
        }
        if(!isalpha(*e))
        {
            e--;
            continue;
        }
        char c=*s;
        *s=*e;
        *e=c;
        s++;
        e--;
    }
    return S;
}
