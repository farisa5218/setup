#include <stdio.h>
#include <stdlib.h>

int main() {
    int m,n;
    scanf("%d%d",&m, &n);

    int matrix[m][n];

    // Read the matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
int x,flag=0;
scanf("%d",&x);
for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            {
           if(matrix[i][j]==x)
           {
               flag=1;
           }

        }
    }
if(flag==0)
    {
               printf("will take number\n");
           }
           else{
            printf("will not take number\n");
           }
    return 0;
}
