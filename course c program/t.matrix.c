#include<stdio.h>
#include<math.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n][n];
    for (int i = 0; i < n; i++) //row
        {
            for(int j=0;j<n;j++)//coloum
            {
                scanf("%d",&a[i][j]);
            }
        }
        int sum=0;
        for (int i = 0; i < n; i++) //row
        {
            for(int j=0;j<n;j++)//coloum
            {

            if(i==j)
            {

                sum+=a[i][j];
            }

        }
            printf("%d",sum);
        }
    return 0;
}

