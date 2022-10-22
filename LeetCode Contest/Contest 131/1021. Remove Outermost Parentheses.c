char * removeOuterParentheses(char * S)
{
    int rem = 0;
    int *temp = malloc(sizeof(int)*strlen(S));
    for (int i = 0, n = 0; S[i] != '\0'; ++i)
    {
        if(i==0)
        {
            n++;
        }
        else if (S[i] == '(' && S[i-1] == '(')
        {
            n++;
        } 
        else if (S[i] == ')' && S[i-1] == ')')
        {
            n--;
        }
        temp[i] = n;
        if (n == 1)
        {
            rem++;
        }
    }
    int j = 0;
    char *output = malloc(sizeof(char)*(strlen(S)-rem+1));
    for (int i = 0; i < strlen(S); ++i)
    {
        if (temp[i] != 1)
        {
            output[j] = S[i];
            j++;
        }
    }
    output[j] = '\0';
    return output;
}
