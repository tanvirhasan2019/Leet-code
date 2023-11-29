class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
       int cnt = 0;
       std::unordered_map<int, bool>mp;
       for(int num : nums) mp[num] = true;
       for(int i=0; i<nums.size(); i++){
           if(mp[nums[i] - diff] && mp[nums[i] + diff]) ++cnt;
       }
       return cnt;
    }
};
