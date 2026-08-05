class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        for(char &c : paragraph)
        {
            if(isalpha(c))
            {
                c = tolower(c);
            }
            else
            {
                c = ' ';
            }
        }
        stringstream ss(paragraph);
        unordered_map<string, int> freq;
        string word;
        unordered_set<string> ban(banned.begin(), banned.end());
        while(ss >> word)
        {
            freq[word]++;
        } 
        string max;
        int count = -1;
        for(auto it : freq)
        {
            if(ban.find(it.first) == ban.end() && it.second > count)
            {
                max = it.first;
                count = it.second;
            }
        }
        return max;
    }
};