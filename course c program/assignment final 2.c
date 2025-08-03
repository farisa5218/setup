#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int test;
    scanf("%d", &test);

    for (int t = 0; t < test; t++) {
        long long int m,a,b,c,x;
        scanf("%lld%lld%lld%lld",&m,&a,&b,&c);
        x = m /(a*b*c);

        if (a == 0 || b == 0 || c == 0) {
            printf("-1\n");
        }
         else
            {
            if (a*b*c*x== m)
                {
                printf("%lld\n",x);
            }
            else
                {
                printf("-1\n");
            }
        }
    }

    return 0;
}
