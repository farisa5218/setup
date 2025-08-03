#include<stdio.h>
int main()
{
 for(int i=1;i<=10;i++)
 {
     if(i%2!=0)
        continue;
        if(i==5)
            break;
        //i==5 ar mane ta hocce, je se i=5 paile loop thake bahir hoye gace, i  ar  man [5] ar thake boro hote parbe na abar choto o hote parbe na
        // jehetu akhane even number gula print hocce tai i==5 pabeiiii na, i==5 hole se continue hoye gace loop a.
    printf("square of %d: %d\n",i,i*i);
 }
 return 0;
}
