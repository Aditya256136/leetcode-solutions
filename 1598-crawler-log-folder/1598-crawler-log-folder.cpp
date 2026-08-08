class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        for(string i : logs)
        {
            if(i == "../" && !st.empty())
            {
                st.pop();
                continue;
            }
            else if(i == "../" && st.empty())
            {
                continue;
            }
            else if(i == "./")
            {
                continue;
            }
            st.push(i);
        }
        return st.size();
    }
};