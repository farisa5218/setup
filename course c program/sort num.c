#include <stdio.h>

void fun(int a, int b, int c) {
    int arr[] = {a, b, c};

    // Sort the array in ascending order
    for (int i = 0; i < 2; i++) {
        for (int j = i+1; j <=2; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print the values in ascending order
    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }

    printf("\n");

    // Print the values in the sequence they were read
    printf("%d\n%d\n%d\n", a, b, c);
}

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    fun(A, B, C);

    return 0;
}
