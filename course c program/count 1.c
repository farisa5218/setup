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
  { if (a[i]%2==0)
    {
    divided2++;
    }
    else if (a[i]%3==0)
    {
    divided3++;
    }
    }
   { printf("%d\n", divided2);
   }
   { printf("%d\n", divided3);

   }
    return 0;
}
