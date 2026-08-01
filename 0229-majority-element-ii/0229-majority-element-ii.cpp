class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> res;
        for (int x : nums) 
        {
            freq[x]++;
        }
        for (auto &it : freq) 
        {
            if(it.second > ((nums.size())/3))
            {
                res.push_back(it.first);
            }
        }
        return res;
    }
};