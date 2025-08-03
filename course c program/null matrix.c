#include<stdio.h>
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
    int count=0,element;
    element=r*c;
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]==0)
            {
                count++;
            }
        }
    }
    if(element==count)
    {
        printf("NULL MATRIEX");
    }
    else
    {
        printf(" NOT NULL MATRIEX");
    }
    return 0;
}
