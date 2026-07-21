class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int k = 1, n;
        
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            digits[i] += k;
            n = digits[i];
            digits[i] %= 10;
            k = 0;
            if (digits[i]%10 == 0 && n != 0)
            {
                k = 1;
                if (i == 0)
                {
                    digits.insert(digits.begin(), 1);
                }
                
            }
            
            
        }
        
        return digits;
    }
};