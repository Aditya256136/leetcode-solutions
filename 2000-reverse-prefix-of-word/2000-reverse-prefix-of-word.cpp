class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        int n = 0, flag = 0;
        for(char i : word)
        {
            n++;
            if(i == ch)
            {
                flag = 1;
                st.push(i);
                break;
            }
            st.push(i);
        }
        if(flag == 0)
        {
            return word;
        }
        for(int i = 0; i < n; i++)
        {
            word[i] = st.top();
            st.pop();
        }
        return word;
    }
};