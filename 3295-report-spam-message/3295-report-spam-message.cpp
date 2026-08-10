class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        int count = 0;
        unordered_set<string> st(bannedWords.begin(), bannedWords.end());
        for(string &i : message)
        {
            if(st.find(i) != st.end())
            {
                count++;
            }
            if(count >= 2)
            {
                return true;
            }
        }
        return false;
    }
};