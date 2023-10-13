class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        std::unordered_map<char, int>mp1;
        std::unordered_map<char, int>mp2;
        int i;
        for(i=0; i<s.size(); i++){
           if(mp1.count(s[i]) > 0 ){
               mp1[s[i]] = mp1[s[i]] + 1;
           }else{
               mp1[s[i]] = 1;
           }
        }

        for(i=0; i<t.size(); i++){
           if(mp2.count(t[i]) > 0 ){
               mp2[t[i]] = mp2[t[i]] + 1;
           }else{
               mp2[t[i]] = 1;
           }
        }

        for(const auto& x : mp1){
            if(mp2[x.first] != x.second ) return false;
        }
        return true;
    }
};
