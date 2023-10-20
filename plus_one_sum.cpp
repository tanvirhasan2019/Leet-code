class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        for(int i=digits.size()-1; i>=0; i--){
            if(i == digits.size() - 1 ){
                if(digits[i] + 1 > 9 ){
                    carry = 1;
                    digits[i] = 0;
                }else{
                  digits[i] = digits[i] + 1;
                  return digits;
                }
            }else{
               if(digits[i] + carry > 9 ){
                   digits[i] = 0;
                   carry = 1;
               }else{
                   digits[i] += carry;
                   carry = 0;
                }
            }
        }
        if(carry == 1 ) digits.insert(digits.begin() + 0, 1);
        return digits; 
    }
};
