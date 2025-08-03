#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int T;
    while (scanf("%d", &T)!=EOF) {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

            int x,y;
            x=((m1 * d) / (m1 + m2));
            y=d-x;
            printf("%d\n", y);
    }

    return 0;
}

