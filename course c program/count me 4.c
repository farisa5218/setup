#include<stdio.h>
#include<string.h>
int main()
{

        char n[10000];
        scanf("%s",&n);
        int count[26]={0};
        for(int i=0;i<strlen(n);i++)
        {
            int value=(n[i]-'a');
            count[value]++;
        }
        for(int i=0;i<26;i++)
        {
            if(count[i]!=0)
            {
                printf("%c -%d\n",i+'a',count[i]);
            }
        }
    return 0;
}

