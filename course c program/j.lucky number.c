#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int oddcount=0;
    int min=INT_MAX;
   for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            oddcount=1;
        }
        else if(min==a[i])
        {
            oddcount++;
        }
    }
    if(oddcount%2==1)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }
   return 0;
}
