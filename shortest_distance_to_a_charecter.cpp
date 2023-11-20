class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        std::vector<int>pos;
        for(int i=0; i<s.size(); i++){
            if(s[i] == c) pos.push_back(i);
        }
        std::vector<int>result;
        for(int i=0; i<s.size(); i++){
            int min_pos = INT_MAX;
            for(int j=0; j<pos.size(); j++){
                min_pos = min(min_pos, abs(pos[j] - i));
            }
            result.push_back(min_pos);
        }
        return result;
    }
};
