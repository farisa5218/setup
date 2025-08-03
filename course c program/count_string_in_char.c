#include<stdio.h>
#include<limits.h>
#include<string.h>
int main()
{
   char s[1001];
   scanf("%s",&s);
   int count[26]={0};
   for(int i=0;i<strlen(s);i++)
   {
    if(s[i]>='A' && s[i]<='Z')
    {
        s[i]=s[i]+32;
    }
       int value=s[i]-'a';
       count[value]++;
   }
   for(int i=0;i<26;i++)
   {
       if(count[i]!=0)
       {
       printf("%c-%d\n",i+'a',count[i]);
   }
   }
   return 0;
}







