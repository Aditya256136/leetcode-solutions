class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> freq;
        for(char i : ransomNote)
        {
            freq[i]++;
        }
        for(char j : magazine)
        {
            if(freq.find(j) != freq.end())
            {
                freq[j]--;
            }
        }
        for(auto it : freq)
        {
            if(it.second > 0)
            {
                return false;
            }
        }
        return true;
    }
};