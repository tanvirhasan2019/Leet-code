class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 1 ) return true;
        string result = ;
        for(int i = 0; i<s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' || isdigit(s[i])) result +=  tolower(s[i]);
        }
        int j = result.size() - 1 ;
        bool isPalindrome = true;
        for(int i=0; i<ceil(result.size() / 2); i++){
          if(i > j ) break;
          if(result[i] != result[j]) isPalindrome = false;
          j--;
        }
        return isPalindrome;
    }
};
