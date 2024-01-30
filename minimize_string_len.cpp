class Solution {
public:
    int minimizedStringLength(string s) {
        int min_len = 0;
        std::unordered_map<int, int>mp;
        for(char c : s){
            if(mp.count(c) == 0) min_len++;
            mp[c]++;
        }
        return min_len;
    }
};
