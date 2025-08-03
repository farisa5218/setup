#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        {
        scanf("%d", &a[i]);
       }
       int i=0,j=n-1,tem;
       while(i<j)
       {
           tem=a[i];
           a[i]=a[j];
           a[j]=tem;
           i++;
           j--;
       }
          for(int i=0;i<n;i++)
          {
        printf("%d ",a[i]);
        }
    return 0;
}


