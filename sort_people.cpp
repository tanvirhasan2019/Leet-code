class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        std::map<int, string>mp;
        for(int i=0; i<heights.size(); i++){
            mp[heights[i]] = names[i];
        }
        names.clear();
        for(auto const &x : mp){
            names.push_back(x.second);
        }
        std::reverse(names.begin(), names.end());
        return names;
    }
};
