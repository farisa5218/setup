#include<stdio.h>
#include<string.h>
void fun(int s[],int i)
{
    if(s[i]=='\0')
    {
        return 0;
    }
    int j=strlen(s)-1;
    int flag=1;
    while(i<j){
    if(s[i]!=s[j])
    {
        flag=0;
    }

    j--;
    fun(s,i+1);
    }

    if(flag==1)
    {
        printf("palindrome");
    }
    else
    {
        printf("NOT palindrome");
    }
}
int main()
{
    char s[205];
    scanf("%d",&s);
    fun(s,0);

    return 0;
}

