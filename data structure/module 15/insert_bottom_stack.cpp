#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& s, int x) 
{
  stack<int> st;
  while(!s.empty())
  {
      st.push(s.top());
      s.pop();
  }
  st.push(x);
  while(!st.empty())
  {
      s.push(st.top());
      st.pop();
  }
  return s;
}
