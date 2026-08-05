class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        unordered_map<string, int> freq;
        
        stringstream ss(s1);
        string word;
        
        while (ss >> word) 
        {
            freq[word]++;
        }
        
        stringstream st(s2);
        
        while (st >> word) 
        {
            freq[word]++;
        }
        
        vector<string> res;

        for(auto it : freq)
        {
            if(it.second == 1)
            {
                res.push_back(it.first);
            }
        }
        return res;
    }
};