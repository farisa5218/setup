#include<stdio.h>
void fun(int a,int b, int c)
{
int ar[]={a,b,c};
for(int i=0;i<2;i++)
{
for(int j=i+1;j<3;j++)
{
if(ar[i]>ar[j])
{
int tem=ar[i];
ar[i]=ar[j];
ar[j]=tem;
}
}
}
for(int i=0;i<=2;i++)
{
    printf("%d\n",ar[i]);
}
printf("\n");
printf("%d\n%d\n%d\n",a,b,c);
}
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
fun(a,b,c);
return 0;
}
