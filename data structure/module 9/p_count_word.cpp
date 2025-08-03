#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   bool inside_word=false;
   int count=0;
   for(char c:s) 
   {
    if(isalpha(c)) //because isalpha ata "a" hole 2 "A" hole dibe 1 r kono spacial char dile hobe 0 r 0 mane false
                  //isalpha(c) likhle hobe >0 likha lage na
    {
        if(inside_word==false) //jodi word gula special character hoy tobe count koro
        {
            count++;   //input meep meep
        } 
        inside_word=true;
    }
    else
    {
        inside_word=false;
    }
   }
   cout<<count <<endl;
    return 0;
}