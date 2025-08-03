#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==1999)
        {
            printf("Correct\n");
            //terminate kora mane loop theke bahir hoye gaya
            //jer kanone break use korte hobe
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

       return 0;
}




