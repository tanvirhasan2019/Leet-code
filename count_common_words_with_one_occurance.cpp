class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int cnt = 0;
        std::unordered_map<string, pair<int, int>>mp;
        for(int i=0; i<words1.size(); i++){
            mp[words1[i]].first++;
        }

        for(int i=0; i<words2.size(); i++){
            mp[words2[i]].second++;
        }

        for(auto itr : mp){
            if(itr.second.first == 1 && itr.second.second == 1 ) ++cnt;
        }

        return cnt;
    }
};
