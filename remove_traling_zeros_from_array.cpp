class Solution {
public:
    string removeTrailingZeros(string num) {
        int j = num.size()-1;
        while(num[j] == '0' && j >=0 ) j--;
        return num.substr(0, j+1);
    }
};
