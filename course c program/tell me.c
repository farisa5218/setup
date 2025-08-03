#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
 for(int t=0;t<test;t++)
  {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        int x;
        scanf("%d",&x);
        int flag=0;
        for(int i=1;i<=n;i++)
        {
        if(a[i]==x)
       {
          flag=1;
          break;
       }
        }
        if(flag==1)
        {
            printf("YES");
        }
        else
        {
            printf("NO\n");
        }
  }
    return 0;
}
