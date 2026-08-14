class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        string part;
        vector<string> s;
        while (getline(ss, part, '/')) 
        {
            s.push_back(part);
        }
        vector<string> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ".." && st.empty())
            {
                continue;
            }
            else if(!st.empty() && s[i] == "..")
            {
                st.pop_back();
            }
            else if(s[i] == ".")
            {
                continue;
            }
            else if(s[i].empty())
            {
                continue;
            }
            else
            {
                st.push_back(s[i]);
            }
        }
        string ans = "";
        if (st.empty())
            return "/";
        for(string dir : st)
        {
            if(dir.empty())
                continue;
            
            ans += ("/" + dir);
        }
        return ans;
    }
};