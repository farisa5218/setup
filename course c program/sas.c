#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
     scanf("%d",&n);
   long long int a[n],sum=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        sum=(sum+a[i]);

    }
    sum=abs(sum);
    printf("%d\n",sum);
    return 0;
}
