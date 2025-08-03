#include<stdio.h>
int main()
{
int i,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if(n%i==0)
    {
        printf("YES\n");
    }
    else
    {

        printf("NO\n");
    }
}


return 0;
}
