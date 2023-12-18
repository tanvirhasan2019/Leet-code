class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int cnt = 0;
        for(int i=0; i<words.size() - 1; i++){
            for(int j = i + 1; j < words.size(); j++){
                string r_s = words[j];
                std::reverse(r_s.begin(), r_s.end());
                if(words[i] == r_s) {
                    ++cnt;
                    break;
                }
            }
        }
        return cnt;
    }
};
