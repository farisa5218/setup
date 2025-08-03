#include<stdio.h>
void fun(int n)
{
    for(int i=1;i<=n;i++)
    {
      printf("%d\s",i);;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
  fun(n);
  return 0;
}
