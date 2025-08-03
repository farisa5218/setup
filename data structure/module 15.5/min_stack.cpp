#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	stack<char>st;
	string s1;
	for(char c:s)
	{
		st.push(c);
	}
	while(!st.empty())
	{
		s1+=st.top();
		st.pop();
	}
	return s1;
}
//https://www.naukri.com/code360/problems/kevin-s-stack-problem_1169465?leftPanelTabValue=PROBLEM