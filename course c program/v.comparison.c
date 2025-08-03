#include<stdio.h>
int main()
{
 int a,b;
 char c;
 scanf("%d %c %d",&a,&c,&b);
 if(c=='>')
 {
     if(a>b){
        printf("RIGHT\n");
     }
     else{
        printf("WRONG\n");
     }
 }
 else if(c=='<')
 {
     if(a<b){
        printf("RIGHT\n");
     }
     else{
        printf("WRONG\n");
     }
 }
else if(c=='=')
 {
     if(a==b){
        printf("RIGHT\n");
     }
     else{
        printf("WRONG\n");
     }
 }
 return 0;
}

