#include <stdio.h>
 
int main() 
{
   
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if (A[i] > 0) 
        {
           printf("1");
        } 
        else if (A[i] < 0) 
        {
            printf("2");
        }
        else{
            printf("0");
        }
        printf(" ");
    }
 
    return 0;
}