#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0,sum1=0;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
               sum+=a[i][j];
            }
            if(i+j==r-1)
            {
              sum1+=a[i][j];
            }
        }
    }
    int ans=abs(sum-sum1);
    printf("%d",ans);
    return 0;
}

