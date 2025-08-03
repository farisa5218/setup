#include<stdio.h>
int main()
{
    char a,ans;
    scanf("%c",&a);
    if(a>='a' && a<='z')
    {

        ans=a-32;
      printf("%c",ans);
    }
    else
    {
      ans=a+32;
     printf("%c",ans);
    }

    return 0;
}
