#include<stdio.h>
void fun(int n,int i)
{
    if(n==i-1)return;
    printf("%d",n);
    if(n!=1)
    {
        printf(" ");
    }
    fun(n-1,i);
}
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    fun(n,i);
    return 0;
}
