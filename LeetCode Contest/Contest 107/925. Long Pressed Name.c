bool isLongPressedName(char * name, char * typed)
{
    int sizeN = strlen(name);
    int sizeT = strlen(typed);
    int i, j;
    for(i = 0, j = 0; i < sizeN && j < sizeT; j++)
    {
        if(name[i] == typed[j]) 
            i++;
    }
    if(i >= sizeN) 
        return true;
    else 
        return false;
}
