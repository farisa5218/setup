#include<stdio.h>
void fun(int a)
{
    if(a>0)
    {
        printf("%d",a);
    }
    else if(a<0)
    {
        printf("%d",-1*a);
    }
}
int main()
{
int a;
scanf("%d",&a);
fun(a);
return 0;
}

