class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> st;
        for(char j : jewels)
        {
            st.insert(j);
        }
        int count = 0;
        for(char s : stones)
        {
            if(st.find(s) != st.end())
            {
                count++;
            }
        }
        return count;
    }
};