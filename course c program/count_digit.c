#include <stdio.h>
int main() 
{
 int n, c = 0;
 scanf("%d", &n);
 if (n < 0) {
 n = -n;
 }
 do {
 c++;
 n /= 10;
 } while (n != 0);
 printf("%d\n", c);
 return 0;
}
