#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<string,int>mp;
   mp["sakib"]=100;
   mp["tamim"]= 200;
   mp["musfiq"]= 85;
   //another way to write
   mp.insert({"hridoy",66});
   mp.insert({"virat",18});
   // here first ta holo key jeta ke amra index boltam and second ta holo value
   // i check value 85 in musfiq index
//    cout<<mp["musfiq"]<<endl;  
for(auto it=mp.begin();it!=mp.end();it++)
{
    cout<<it->first<<" "<<it->second<<endl;
}
    return 0;
}