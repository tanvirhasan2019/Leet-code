class Solution {
public:
    string reverseWords(string s) {
      string result = , str = ;
      for(int i=0; i<s.size(); i++){
          if(i == s.size()-1){
            str += s[i];
            std::reverse(str.begin(), str.end());
            result += str;
          }else if(s[i] == ' '){
              std::reverse(str.begin(), str.end());
              result += str +  ;
              str = ;
          }else{
              str += s[i];
          }
      }
      return result;
    }
};
