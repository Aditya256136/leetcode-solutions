class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int a, b, num; 
        for(int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] == "+")
            {
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                num = a + b;
                st.push(num);
            }
            else if (tokens[i] == "-")
            {
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                num = b - a;
                st.push(num);
            }
            else if (tokens[i] == "*")
            {
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                num = a * b;
                st.push(num);
            }
            else if (tokens[i] == "/")
            {
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                num = b / a;
                st.push(num);
            }
            else
            {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};