#include<stdio.h>
int c(char x)
{
    char c=x;
    scanf("%c",&x);
    scanf("%c",&x);
    scanf("%c",&x);
    return c;
}
int main()
{

    printf("%d\n%d\n%d\n",c('a'),c('A'),c('0'));

    return 0;
}
