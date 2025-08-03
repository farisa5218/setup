#include<stdio.h>
#include<limits.h>
#include<string.h>
int fact(int a[] ,int n,int i)
{
    if(i==n)
    {
        return INT_MIN;
    }
    int max=fact(a,n,i+1);
    if(a[i]>max)
    {
        return a[i];
    }
    else
        {
        return max;
    }



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
  int x=fact(a,n,0);
  printf("%d",x);
   return 0;
}





