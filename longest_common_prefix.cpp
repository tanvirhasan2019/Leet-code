class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string result = ;
      for(int i=0; i<strs[0].size(); i++){
          char ch = strs[0][i];
          int is_common =  1;
          for(int j = 0; j<strs.size(); j++){
              if(i > strs[j].size()) return result;
              if( ch != strs[j][i] ){
                  is_common = 0;
              }
          }
          if(is_common == 0 ) return result;
          result += ch;
      }
      return result;
    }
};
