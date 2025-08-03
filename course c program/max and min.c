#include<stdio.h>
#include<limits.h>
int main()
{
    int i,n,a;
    int max=INT_MIN,min=INT_MAX;
    // <limits> ar modde int max/min ar joto number acce segula set kora acce
    //ai header file automatic max and min choose kore
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a>max)
        {
            max=a;
        }
        if(a<min)
        {
            min=a;
        }
    }
    printf("%d %d\n",min,max);
       return 0;
}






