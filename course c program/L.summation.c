#include<stdio.h>
int fun(int a[], int n,long long int *result,int i) {
    if (i==n) {
        return 0; // Base case: when there are no elements left, return.
    }
    int x=fun(a,n,*result+=a[i],i+1);
    return x;
}
int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

  long long int result=0;
  long long int x=fun(a,n,*result,0);
  printf("%d",x);
    return 0;
}
