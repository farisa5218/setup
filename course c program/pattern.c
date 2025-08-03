#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1,k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("%d",j);

        }
       s--;
       k++;
        printf("\n");
    }
for(int j=1;j<=n;j++)
{
    for(int i=j+1;i<n;i++)
    {
       int  if(a[i]>a[j])
        {

      int tem=a[i];
      a[i]=a[j];
      a[j]=tem ;
        }
    }
}
        return 0;
}



