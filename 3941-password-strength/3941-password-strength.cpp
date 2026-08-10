class Solution {
public:
    int passwordStrength(string password) {
        int strength = 0;
        unordered_set<char> st;
        for(char i : password)
        {
            st.insert(i);
        }
        for(auto it : st)
        {
            if(it >= 'a' && it <= 'z')
            {
                strength += 1;
            }
            else if(it >= 'A' && it <= 'Z')
            {
                strength += 2;
            }
            else if(it >= '0' && it <= '9')
            {
                strength += 3;
            }
            else
            {
                strength += 5;
            }
        }
        return strength;
    }
};