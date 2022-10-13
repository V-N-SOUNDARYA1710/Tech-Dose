char * largestGoodInteger(char * num)
{
    int max = 0;
    int i = 0;
    int l = strlen(num);
    while(i+2<l)
    {
        if(num[i] == num[i+1] && num[i] == num[i+2])
            if(num[i] > max)
                max = num[i];
        ++i;
    }
    if(max)
    {
        char* ans = malloc(4);
        ans[0] = ans[1] = ans[2] = max;
        ans[3] = 0;
        return ans;
    }
    char* ans = malloc(1);
    ans[0] = 0;
    return ans;
}
