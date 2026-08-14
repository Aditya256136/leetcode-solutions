class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        stack<int> st;
        int id = -1;
        for(int i : nums)
        {
            if(i >= id)
            {
                st.push(i);
                id = i;
            }
        }
        return st.size();
    }
};