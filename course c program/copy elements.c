#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int m;
    scanf("%d",&m);
    int b[m];
    for(int j=0;j<m;j++)
    {
      scanf("%d",&b[j]);
    }
    int ans[n+m];
       for(int i=0;i<n;i++)
       {
           ans[i]=ar[i];
       }
   int i=n;
   for(int j=0;j<m;j++)
   {
       ans[i]=b[j];

   }
   for(int i=0;i<(n+m);i++)
   {
       printf("%d ",ans[i]);
   }
    return 0;
}

