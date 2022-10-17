bool areAlmostEqual(char * s1, char * s2)
{
    int swap = 0, i, idx;
    char c1 , c2;
    if(strcmp(s1,s2) == 0)
        return true;
    for (i = 0; i < strlen(s1); i++)
    {
        if (s1[i] != s2[i])
        {  
            if (swap == 0)
            {
                c1 = s1[i];
                c2 = s2[i];
            }
            else if (c1 != s2[i] || c2 != s1[i])
                return false;
            swap++;
            idx = i;
        }
        if (swap > 2)
            return false;
    }
    if (swap == 2 && c1 == s2[idx] && c2 == s1[idx])
        return true;
    return false;
}
