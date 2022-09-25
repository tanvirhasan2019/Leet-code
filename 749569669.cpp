class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size() == 0 || needle.size() == 0 || haystack == needle ){
            return 0;
        }
        if(needle.size() > haystack.size()){
            return -1;
        }
        char ch = needle[0];
        for(int i=0; i<haystack.size(); i++){
            string h_sub = "";
            for(int j=i; j<(i+needle.size()) && i+needle.size() <= haystack.size(); j++){
                h_sub += haystack[j];
            }
            if(h_sub == needle){
                return i;
            }
        }
        return -1;
        
    }
};