class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int id = -1, count = 0;
        for(int i : nums)
        {
            if(i >= id)
            {
                count++;
                id = i;
            }
        }
        return count;
    }
};