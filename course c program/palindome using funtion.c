#include <stdio.h>
#include <string.h>

int fun(char s[])
 {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++)
        {
        if (s[i] != s[len - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main() {
    char s[1001];
    scanf("%s", &s);

    if (fun(s))
        {
        printf("YES\n");
    }
    else
        {
        printf("NO\n");
    }

    return 0;
}

