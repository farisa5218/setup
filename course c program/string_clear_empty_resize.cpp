#include<bits/stdc++.h>
using namespace std;
int main()
{
     //{
     //string s="hello world";
     // cout<<s<<endl;
      //s.clear();
      //ata string ta ke clear ba khali kore dey and size o zero kore dey
     //cout<<s<<endl;
    //cout<<s.size()<<endl;
    //if(s.empty()==true)cout<<"EMPTY"<<endl;
   // else cout<<"NOT EMPTY"<<endl;
   //ata string khali kina check kore
   //}
   string s;
   cin>>s;
   s.resize(5);
   //resize joto toto porjonto thik rekhe baki sob bad diye dey
   cout<<s<<endl;
   //cout ar por size hoye jai 5 akhon ar size bariaa 8 kore baki
   //gula te 'a' bosai daw
   s.resize(8,'a');
   cout<<s<<endl;
   //resize size barte pare abar komate pare
    return 0;
}