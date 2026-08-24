class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        unordered_map<int, int> freq;
        for(int i : nums1)
        {
            freq[i]++;
        }
        for(int i : nums2)
        {
            if(freq.find(i) != freq.end() && !(freq[i] <= 0))
            {
                vec.push_back(i);
                freq[i]--;
            }
        }
        return vec;
    }
};