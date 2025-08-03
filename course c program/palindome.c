#include <stdio.h>
#include <string.h>

int main() {
    char str[1001]; // Assuming the maximum string length is 1000
    scanf("%s", str);

    int len = strlen(str);
  int isPalindrome = 1; // Assuming it's a palindrome by default

    for (int i = 0; i < len / 2; i++) {
        printf("%s",str[i]);}

    return 0;
}
