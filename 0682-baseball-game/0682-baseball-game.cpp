class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int rem = 0;
        for(string op : operations)
        {
            int res = 0;
            if (op == "+")
            {
                    if(st.size() < 2)
                    {
                        return rem;
                    }
                    else
                    {
                        int pre = st.top();
                        st.pop();
                        int prev = st.top();
                        st.pop();
                        res += (pre + prev);
                        st.push(prev);
                        st.push(pre);
                        st.push(res); 
                    }
            }
            else if ( op == "C")
            {
                if(st.empty())
                {
                    return rem;
                }
                else
                {
                    st.pop();
                }
            }
            else if (op == "D")
            {
                if(st.empty())
                {
                    return rem;
                }
                else
                {
                    st.push(st.top() * 2);
                }
            }
            else
            {
                st.push(stoi(op));
            }
        }
        while(!st.empty())
        {
            rem += st.top();
            st.pop();
        }
        return rem;
    }
};