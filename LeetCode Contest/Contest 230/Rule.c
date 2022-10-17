int countMatches(char *** items, int itemsSize, int* itemsColSize, char * ruleKey, char * ruleValue)
{
    int count = 0;
    int index = *ruleKey == 't' ? 0 : *ruleKey == 'c' ? 1 : 2;
    for(int i  = 0; i < itemsSize;i++)
    {
        count += !strcmp(items[i][index], ruleValue);
    }
    return count;
}
