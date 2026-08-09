class Solution {
public:
    string reverseStr(string s, int k) {
        int l = 0, r = min(k - 1, (int)s.size() - 1); 
        while(l < r)
        {
            swap(s[l], s[r]);
            l++;
            r--;
        }
        for(int i = k+k; i < s.size(); i+=(k+k))
        {
            l = i;
            r = min(i + k - 1, (int)s.size() - 1);
            while (l < r)
            {
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};