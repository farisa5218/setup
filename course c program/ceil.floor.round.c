#include<stdio.h>
int main()
{
   double n;
    scanf("%lf",&n);
    int x=ceil(n);
    int y=floor(n);
    int z=round(n);
    printf("doule-%0.2lf ceil-%d floor-%d round-%d",n,x,y,z);
    return 0;
}

