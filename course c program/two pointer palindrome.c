#include<stdio.h>
#include<string.h>
int main()
{
    char s[205];
    scanf("%s",&s);
    int i=0,j=strlen(s)-1;
    int flag=1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            flag=0;
        }
        i++;
        j--;
    }
    if(flag==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}


