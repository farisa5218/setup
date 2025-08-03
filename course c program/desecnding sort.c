#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int tem;
     for(int i=0;i<n-1;i++)
    {
         for(int j=i+1;j<n;j++)
    {
        if(a[i]<a[j])//boro thake choto print kore
        {
            tem=a[i];
            a[i]=a[j];
            a[j]=tem;
        }
    }
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}


