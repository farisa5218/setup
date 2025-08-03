#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        char n;
        scanf("%s",&n);
        int tiger=0,pathaan=0;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='t')
            {
                tiger++;
            }
             if(s[j]=='p')
            {
                pathaan++;
            }
        }
       if(tiger>pathaan)
       {
           printf("Tiger\n");
       }
       else if(tiger<pathaan)
       {
           printf("Pathaan\n");
       }
       else if(tiger==pathaan)
       {
           printf("Draw\n");
       }
    }
    return 0;
}
