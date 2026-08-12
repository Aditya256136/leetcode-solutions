class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;
        for(string i : emails)
        {
            string ss = "";
            for(int j = 0; j < i.size(); j++)
            {
                if (i[j] == '@') 
                {
                    while (j < i.size()) 
                    {
                        ss += i[j];
                        j++;
                    }
                    break;
                }
                else if(i[j] == '.')
                {
                    continue;
                }
                else if(i[j] == '+')
                {
                    while(i[j] != '@')
                    {
                        j++;
                    }
                    while(j < i.size())
                    {
                        ss += i[j];
                        j++;
                    }
                    break;
                }
                else
                {
                    ss += i[j];
                }
            }
            st.insert(ss);
        }
        return st.size();
    }
};