#include<bits/stdc++.h>
using namespace std;
int main()
{
   stack<int>st;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    st.push(x);
   } 
   stack<int>cpy;
   while(!st.empty())
   {
    cpy.push(st.top());
    st.pop();
   }
   while(!cpy.empty())
   {
    st.push(cpy.top());
    cout<<st.top()<<" ";
    cpy.pop();
   }
    return 0;
}