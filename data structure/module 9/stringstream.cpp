#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
  getline(cin,s);
  stringstream ss;
  ss<<s;
  string word;
  int c=0;
  while(ss>>word)
  {
    c++;
    cout<<word<<endl;
  }
  cout<<c;
    return 0;
}