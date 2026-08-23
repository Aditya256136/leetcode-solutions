class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_set<int> st;
        set<pair<int, int>> pairs;
        for(int i : nums)
        {
            if(st.find(i - k) != st.end())
            {
                pairs.insert({max(i - k, i), min(i - k, i)});
            }
            if(st.find(i + k) != st.end())
            {
                pairs.insert({max(i + k, i), min(i + k, i)});
            }
            st.insert(i);
        }
        return pairs.size();
    }
};