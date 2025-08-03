#include<stdio.h>
void fun(int ar[],int n,int *count)
{
     *count=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2!=0)
        {
            (*count)++;
        }
}
}
int main()
{
int n;
scanf("%d",&n);
int ar[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&ar[i]);
}
int count;
fun(ar,n,&count);
printf("%d",count);
return 0;
}

