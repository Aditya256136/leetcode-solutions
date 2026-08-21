class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }
        int count = - 1, ele = -1;
        for(auto it : freq)
        {
            if(it.second >= count && (it.first) % 2 == 0)
            {
                if(it.second > count)
                {
                    ele  = it.first;
                    count = it.second;
                }
                else if(it.second == count && ele > it.first)
                {
                    ele = it.first;
                    count = it.second;
                }
            }
        }
        return ele;
    }
};