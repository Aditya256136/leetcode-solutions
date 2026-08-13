class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string ans = "";
        for(char i : s)
        {
            if(st.empty())
            {
                st.push(i);
            }
            else if(i != st.top())
            {
                st.push(i);
            }
            else
            {
                st.pop();
            }
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};