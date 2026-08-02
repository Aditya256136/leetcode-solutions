class Solution {
public:
    string makeGood(string s) {
        string st;
        for(int i = 0; i < s.size(); i++)
        {
            if(isupper(s[i]))
            {
                if(!(st.empty()) && st.back() == tolower(s[i]))
                {
                    st.pop_back();
                }
                else if(s[i + 1] == tolower(s[i]))
                {
                    i++;
                }
                else
                {
                    st.push_back(s[i]);
                }
            }
            else
            {
                if(!(st.empty()) && st.back() == toupper(s[i]))
                {
                    st.pop_back();
                }
                else
                {
                    st.push_back(s[i]);
                }
            }
        }
        return st;
    }
};