#include<stdio.h>
int main()
{
    int x,x1,x2,r,p,m;
    scanf("%d%d%d",&x,&x1,&x2);
    r=(x-x1-x1-x2)/3;
    p=r+x1;
    m=p+x2;
    printf("Proma%d Rimi%d Monisha%d",p,r,m);

    return 0;

}
