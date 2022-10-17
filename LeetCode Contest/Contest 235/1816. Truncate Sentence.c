char * truncateSentence(char * s, int k)
{
    int found = 0;
    char *pc = s;
    while (found < k && *pc != '\0') 
    {
        ++pc;
        found += (*pc == ' ');
    }
    *pc = '\0';
    return s;
}
