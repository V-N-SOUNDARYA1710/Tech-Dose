#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    int freq[26]={0};
    printf("Enter a string:\n");
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            freq[str[i]-97]++;
        }
       else if(str[i]>='A' && str[i]<='Z)
        {
            freq[str[i]-65]++;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)
        {
            printf("%c-%d\n",(i+97),freq[i]);
        }
    }
}
