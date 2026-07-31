class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int count = 0, high;
        for (int x : nums) 
        {
            freq[x]++;
        }
        for (auto &it : freq) 
        {
            if(it.second > count)
            {
                count = it.second;
                high = it.first;
            }
        }
        return high;
    }
};