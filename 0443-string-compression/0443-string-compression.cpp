class Solution {
public:
    int compress(vector<char>& chars) {
        int ans = 0, j, count, t = 0;
        for(int i = 0; i < chars.size(); i++)
        {
            j = i + 1;
            count = 0;
            while(j < chars.size() && chars[i] == chars[j])
            {
                j++;
                count++;
            }
            if(count + 1 <= 1)
            {
                ans++;
                chars[t] = chars[i];
                t++;
            }
            else
            {
                chars[t] = chars[i];
                t++;
                ans ++;
                string num = to_string(j - i);
                for (char ch : num) 
                {
                    chars[t] = ch;
                    t++;
                    ans++;
                }
            }
            i += count;
        }
        return ans;
    }
};