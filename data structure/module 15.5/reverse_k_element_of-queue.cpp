#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
   stack<int>st;
   queue<int>q1;
   for(int i=0;i<k;i++)
   {
       st.push(q.front());
       q.pop();
   }
   while( !st.empty())
   {
       q1.push(st.top());
       st.pop();
   }
   while(!q.empty())
   {
       q1.push(q.front());
       q.pop();
   }
   return q1;
}
//https://www.naukri.com/code360/problems/reverse-first-k-elements-of-queue_982771