#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int l=0;
    int h=strlen(str)-1;
    while(h>l)
    {
        if(str[l++]!=str[h--])
        {
            printf("%s is a not Palindrome",str);
            return 0;
        }
    }
    printf("%s is a Palindrome",str);
}
