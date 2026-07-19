class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, j = 0;
        while(i < nums.size())
        {
            if(nums[i] == val && nums[j] == val)
            {
                i++;
            }
            else if(nums[i] != val && nums[j] == val)
            {
                swap(nums[i], nums[j]);
                i = j;
                i++;
                j++;
            }
            else
            {
                i++;
                j++;
            }
        }
        return j;
    }
};