#include<stdio.h>
#include<string.h>
#include<math.h>
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
    int e;
    scanf("%d",&e);
    for(int i=0;i<c;i++)
    {
        printf("%d ",a[e][i]);//excet row
    }
    int x;
    scanf("%d",&x);
    for(int i=0;i<r;i++)
    {
        printf("%d\n",a[i][x]);//exext coloum
    }
    return 0;
}



