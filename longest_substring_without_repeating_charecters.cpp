class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       if(s.size() <= 1) return s.size();
       std::unordered_set<char> st;
       int left = 0, right = 0, max_len = 0;
       while(right < s.size()){
          if(st.count(s[right]) == 0){
              st.insert(s[right]);
              max_len = std::max(max_len, right - left + 1);
                ++right;
          }else{
              st.erase(s[left]);
              ++left;
          }
       }
       return max_len;
    }
};
