#include<stdio.h>
void fun(int x, int y)
{
    int tem=x;
    x=y;
    y=tem;
    printf("%d %d",x,y);
}
int main()
{
    int x,y;
        scanf("%d%d",&x,&y);
        fun(x,y);
        return 0;
}
