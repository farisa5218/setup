#include<stdio.h>
void fun(int ar[],int n)
{
for(int i=0;i<n;i++){
        ar[4]=500;
printf("%d ",ar[i]);
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
fun(ar,n);

return 0;
}

