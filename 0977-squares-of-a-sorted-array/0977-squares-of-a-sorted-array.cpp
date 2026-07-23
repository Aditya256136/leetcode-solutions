class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0, j = nums.size() - 1, temp;
        while(i < j)
        {
            if(nums[i]*nums[i] >= nums[j]*nums[j])
            {
                nums.insert(nums.begin() + j + 1, (nums[i]*nums[i]));
                nums.erase(nums.begin() + i);
                j--;
            }
            else
            {
                nums[j] = nums[j]*nums[j];
                j--;   
            }
        
        }

        nums[i] = nums[i]*nums[i]; 
        
        return nums;
    }
};