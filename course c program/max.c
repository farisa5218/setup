#include<stdio.h>
int main()
{
    int i,n,max=0,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        //a holo variable jeta n bar nite parbo jar karone bar bar input niya lagbe na
        scanf("%d",&a);
        if(a>max)
        {
            max=a;
        }
    }
    printf("%d\n",max);
       return 0;
}





