#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=1,s=n-1;
    for(int i=1;i<=(2*n-1);i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        if(n<=5)
        {
            s--;
            k=k+2;
        }
        if(n>5)
        {
            s++;
            k=k-2;
        }
        printf("\n");
    }
    return 0;
}


