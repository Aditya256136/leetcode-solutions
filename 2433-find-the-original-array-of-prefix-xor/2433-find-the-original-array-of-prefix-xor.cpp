class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> res;
        int a = pref[0], sum;
        res.push_back(a);
        for(int i = 1; i < pref.size(); i++)
        {
            sum = a ^ pref[i];
            res.push_back(sum);
            a = pref[i];
        }
        return res;
    }
};