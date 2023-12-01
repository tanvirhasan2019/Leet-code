class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt = 0;
        std::unordered_map<char, bool>mp;
        for(char c : allowed) mp[c] = true;

        for(int i=0; i<words.size(); i++){
            for(int j=0; j<words[i].size(); j++){
                else if(j == words[i].size()- 1 ) ++cnt;
            }
        }
        return cnt;
    }
};
