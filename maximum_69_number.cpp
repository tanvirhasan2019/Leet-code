class Solution {
public:
    int sumOfVector(vector<int>digits){
        int mul = 10, sum = 0;
        for(int j=digits.size()-1; j>=0; j--){
            if(j == digits.size() -1 ) sum = digits[j];
            else {
                sum += digits[j]*mul;
                mul *= 10;
            }
        }
        return sum;
    }
     
    int maximum69Number (int num) {
        std::vector<int>digits;
        int max_num = num;
        while(num > 0 ){
            digits.push_back(num % 10 );
            num = num / 10;
        }

        std::reverse(digits.begin(), digits.end());
        int m_d;
    
        for(int i=0; i<digits.size(); i++){
            
            m_d = digits[i];
            
            if(digits[i] == 6 ) digits[i] = 9;
            else digits[i] = 6;

            int sum = sumOfVector(digits);

            digits[i] = m_d;
            max_num = max(max_num, sum);
        }
        return max_num;
    }
};
