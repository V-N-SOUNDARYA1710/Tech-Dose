int numDifferentIntegers(char * word)
{
    int i, num, j = 0, flag;
    char *str;
    char **reg = (char**)malloc(1000 * sizeof(char*));
    str = strtok(word, "abcdefghijklmnopqrstuvwxyz");
    while(str != NULL)
    { 
        while(*str == '0') 
            str++;
        for(i = 0, flag = 1; i < j; i++)
        {
            if(!strcmp(reg[i], str))
            {
                flag = 0;
                break;
            }
        }
        if(flag)
            reg[j++] = str;
        str = strtok(NULL, "abcdefghijklmnopqrstuvwxyz");
    }
    return j;
}
