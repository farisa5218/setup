#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<n;i++)
    {

    if(a[i]<min)
    {
       min=a[i];

    }
    else if(a[i]>max)
    {
        max=a[i];

    }
    }
for(int i=0;i<n;i++)
    {
        int tem=min;
        min=max;
        max=tem;
    }

    printf("%d %d",min,max);

    return 0;
}
