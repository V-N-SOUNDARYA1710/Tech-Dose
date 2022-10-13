int percentageLetter(char * s, char letter){
    int len=strlen(s);
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]==letter)
        {
            count++;
        }
    }
    count*=100;
    float percent=(count/len);
    return round(percent);
    
}
