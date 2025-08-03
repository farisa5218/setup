#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    x=x+1;
    while(x>'z')
    {

        x=x-26;
        break;
        printf("%c",x);
    }
    printf("%c",x);
    return 0;

}
