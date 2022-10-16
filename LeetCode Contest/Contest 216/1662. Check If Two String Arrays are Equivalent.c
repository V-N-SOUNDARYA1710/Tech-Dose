#define Max1 10*10*10
#define Max2 10*10*10
bool arrayStringsAreEqual(char ** word1, int word1Size, char ** word2, int word2Size)
{
    char str1[Max1]="", str2[Max2]="";
    for(int i=0;i<word1Size;i++)
    {
        strcat(str1,word1[i]);
    }
    for(int j=0;j<word2Size;j++)
    {
        strcat(str2,word2[j]);
    }
    return (!strcmp(str1,str2));
}
