#include<stdio.h>
void fun(int a[],int n)
{
    int min=a[0];
    int max=a[0];
    for(int i=1;i<n;i++)
    {
     if(a[i]<min)
    {
       min=a[i];

    }
    if(a[i]>max)
    {
        max=a[i];

    }

    }
     printf("%d %d",min,max);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    fun(a,n);
    return 0;
}
