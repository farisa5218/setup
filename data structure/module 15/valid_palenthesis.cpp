class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char c: s)
        {
            if(c=='(' || c=='{' || c=='[')
            {
                st.push(c);
            }
            else
            {
                if(st.empty()) return false;
                else if(c==')' && st.top()=='(')
                {
                    st.pop();
                }
                else if(c=='}' && st.top()=='{')
                {
                    st.pop();
                }
                else if(c==']' && st.top()=='[')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
           
        }
         return st.empty();// jodi khali hoy tahole buje nite hobe sob gula backet milce r na hoy mile nai;
    }
};