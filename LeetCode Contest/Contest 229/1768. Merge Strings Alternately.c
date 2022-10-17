char * mergeAlternately(char * word1, char * word2)
{
    char *result = (char *)calloc(strlen(word1) + strlen(word2) + 1, sizeof(char));
    int id1 = 0, id2 = 0, idx = 0;
    while(id1 < strlen(word1) || id2 < strlen(word2))
    {
        if(id1 < strlen(word1))
            result[idx++] = word1[id1++];
        if(id2 < strlen(word2))
            result[idx++] = word2[id2++];
    }
    return result;
}
