#include <stdio.h>

int array_sum(int arr[], int n) {
    if (n == 0) {
        return 0;
    } else {
        return arr[n - 1] + array_sum(arr, n - 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = array_sum(arr, n);

    printf("%d\n", result);

    return 0;
}
