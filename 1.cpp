class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        int n = num.size();
        
        // convert the k into string
        
        string str = to_string(k);
        
        int m = str.size();
        
        // intitialize i and j
        
        int i = n - 1, j = m - 1;
        
        int carry = 0;
        
        vector<int> res;
        
        // start traversing from right side
        
        while(i >= 0 || j >= 0 || carry)
        {
            // find sum
            
            int sum = 0;
            
            if(i >= 0)
            {
                sum += num[i];
            }
            
            if(j >= 0)
            {
                sum += str[j] - '0';
            }
            
            sum += carry;
            
            // update the carry
            
            carry = sum / 10;
            
            // push the digit into res
            
            res.push_back(sum % 10);
            
            // update pointers
            
            i--;
            
            j--;
        }
        
        // reverse the res
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};