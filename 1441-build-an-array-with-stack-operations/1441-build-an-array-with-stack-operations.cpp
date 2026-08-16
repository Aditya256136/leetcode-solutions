class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> vec;
        int a = 0;
        for(int i = 1; i <= target[target.size() - 1]; i++)
        {
            if(i == target[a])
            {
                vec.push_back("Push");
                a++;
            }
            else
            {
                vec.push_back("Push");
                vec.push_back("Pop");
            }
        }
        return vec;
    }
};