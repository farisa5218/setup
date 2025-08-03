#include<stdio.h>
#include<string.h>
long long int fact(long long int n)
{
    if(n==0)
    {
        return 1;
    }
     n*=fact(n-1);
    return n;

}
int main()
{
   long long int n;
   scanf("%lld",&n);
  long long int x=fact(n);
   printf("%lld",x);
   return 0;
}




