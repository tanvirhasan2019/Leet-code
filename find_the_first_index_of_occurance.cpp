class Solution {
public:
    int strStr(string haystack, string needle) {
       if(needle.size() > haystack.size()) return -1;
       if(haystack == needle) return 0;

       for(int i=0; i<= haystack.size() - needle.size(); i++){
           string sub = ;
           for(int j = i; j<needle.size() + i; j++){
              sub += haystack[j];
           }
           if(sub == needle) return i;
       }
       return -1;
    }
};
