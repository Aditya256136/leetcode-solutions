class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> st;
        for(char i : s)
        {
            st[i]++;
        }
        for(char i : t)
        {
            if(st.find(i) == st.end())
            {
                return i;
            }
            else if(st.find(i) != st.end() && st[i] == 0)
            {
                return i;
            }
            else if(st.find(i) != st.end())
            {
                st[i]--;
            }
        }
        return '\0';
    }
};