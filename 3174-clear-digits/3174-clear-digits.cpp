class Solution {
public:
    string clearDigits(string s) {
        string st;
        for(char i : s)
        {
            if(!(st.empty()) && isdigit(i))
            {
                st.pop_back();
            }
            else
            {
                st.push_back(i);
            }
        }
        return st;
    }
};