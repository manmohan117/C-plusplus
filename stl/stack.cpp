class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
    if( s[0] == ')' || s[0] == ')' || s[0] == ')')
        return false;

       for(char ch : s)
       {
          if( ch == '(' || ch == '[' || ch == '{')
            st.push(ch);
          else
            {
                while(!st.empty() && ((st.top() == '(' && ch == ')') || (st.top() == '[' && ch == ']' ) || (st.top() == '{' && ch == '}')))
                {
                    st.pop();
                }
            }
       }
       return st.empty();
    }
};