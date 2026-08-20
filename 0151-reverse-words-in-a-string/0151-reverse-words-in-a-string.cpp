class Solution {
public:
    string reverseWords(string s) {
        string word;
        stringstream ss(s);
        vector<string> text;
        while (ss >> word) 
        {
            text.push_back(word);
        }
        int l = 0, r = text.size() - 1;
        string temp;
        while(l < r)
        {
            temp = text[l];
            text[l] = text[r];
            text[r] = temp;
            l++;
            r--;
        }
        string ans = "";
        for(int i = 0; i < text.size(); i++)
        {
            if(i == text.size() - 1)
            {
                ans += text[i];
                break;
            }
            ans += (text[i] + " "); 
        }
        return ans;
    }
};