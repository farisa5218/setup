#include<stdio.h>
#include<string.h>
int main()
{
  int n;
  scanf("%d",&n);
  int s=n-1,k=1;
  for(int i=0;i<=(2*n);i++)
  {
      for(int j=0;j<s;j++)
      {
          printf(" ");
      }
      for(int j=0;j<k;j++)
      {
          printf("*");
      }
      if(i<n)
      {
          s--;
          k+=2;
      }
      else if(i>n)
      {
        s++;
        k-=2;
      }
      printf("\n");
  }
    return 0;
}
