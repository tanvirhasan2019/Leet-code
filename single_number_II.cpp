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
       for(const auto& x : mp){
           if(x.second == 1) return x.first;
       }
       return 0;
    }
};
