#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
    scanf("%d", &a[i]);
    }
    int divided2=0;
    int divided3=0;
    for(int i=0;i<n;i++)
  {
      if (a[i]%2==0)
    {
    divided2+=a[i];
    }
    if (a[i]%3==0)
    {
    divided3+=a[i];
    }
    }

   {
        printf("%d %d",divided2 ,divided3);

   }
    return 0;
}
