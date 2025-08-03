#include <stdio.h>

void fun(int N) {
    for (int i = 1; i <= N; i++) {
        printf("%d", i);

        // To avoid printing a space after the last number
        if (i != N) {
            printf(" ");
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    fun(N);

    return 0;
}

