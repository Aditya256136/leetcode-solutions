class Solution {
public:
    string removeStars(string s) {
        string st;
        for(char i : s)
        {
            if(i == '*' && !st.empty())
            {
                st.pop_back();
            }
            else if(i != '*')
            {
                st.push_back(i);
            }
        }
        return st;
    }
};