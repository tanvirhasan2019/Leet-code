class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        std::unordered_map<int, int>mp;
        for(int i=0; i<numbers.size(); i++){
            if(mp.count(target - numbers[i]) > 0 ){
                if(i+1 > mp[target - numbers[i]]) return {mp[target - numbers[i]], i+1};
                else return {i+1, mp[target - numbers[i]]};
            }
            mp[numbers[i]] = i+1;
        }
        return {0, 0};
    }
};
