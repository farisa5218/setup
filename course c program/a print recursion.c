#include<stdio.h>
void fun(int i,int n)
{
    if(i==n+1) return;
     fun(i+1,n);

    printf("%d\n",i);

}
int main()
{
    int n,i=1;
    scanf("%d",&n);
    fun(i,n);
    return 0;
}
