#include<stdio.h>
int main()
{
 for(int i=1;i<=10;i++)
 {
       if(i%2==0)
        continue;
        if(i==5)
            break;
 printf("square of %d: %d\n",i,i*i);
 // akhane print hobe (1,3), karon hocce akhane just odd number print hobe, odd jokhon [5] hoy tokhon se loop theke purapuri bahir hoye jai because i==5

 //i==5 ar mane ta hocce, je se i=5 paile loop thake bahir hoye gace, i  ar  man [5] ar thake boro hote parbe na abar choto o hote parbe na
 }
  return 0;
}
