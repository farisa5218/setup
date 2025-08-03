#include<stdio.h>
int main()
{
    char s;
    int count[26]={0};
    while(scanf("%c",&s)!=EOF)
    {
        printf("%c ",s);
    }
    return 0;
}
