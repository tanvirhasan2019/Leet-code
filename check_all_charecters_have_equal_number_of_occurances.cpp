class Solution {
public:
    bool areOccurrencesEqual(string s) {
        std::unordered_map<char, int>mp;
        for(int i=0; i<s.size(); i++){
            if(mp.count(s[i]) > 0) mp[s[i]]++;
            else mp[s[i]] = 1;
        }

        int first_char_occurance = mp[s[0]];
        for(auto const &x : mp){
            if(x.second != first_char_occurance) return false;
        }
        return true;
    }
};
