#include<stdio.h>
int main()
{
    int i,j, x,y;
    scanf("%d %d",&i,&j);
    x=i++;
    y=++j;
   printf("i++-%d\n++i-%d",x,y);
    return 0;
}
