class Solution {
public:
    string largestOddNumber(string num) {
        while(num.size()){
            int odd = num[num.size()-1] - '0';
            if(odd % 2 != 0) return num;
            else num.erase(num.size()-1, 1);
        }
        return "";
    }
};
