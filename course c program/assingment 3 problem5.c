#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void odd_even(int a[],int n)
{
    int oddcount=0,evencount=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    printf("%d %d",evencount,oddcount);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    odd_even(a,n);
    return 0;
}
