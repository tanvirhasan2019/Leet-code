class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::unordered_map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            if(mp.count(nums[i])){
                mp[nums[i]]++;
            }else{
                mp[nums[i]] = 1;
            }
        }

        for(const auto& data : mp){
            if(data.second == 1) return data.first;
        }
        return 0;

    }
};
