class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> st;
        for(char i : sentence)
        {
            st.insert(i);
        }
        return st.size() == 26;
    }
};