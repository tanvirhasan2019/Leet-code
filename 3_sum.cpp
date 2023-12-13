class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      std::set<vector<int>>s;
      std::vector<vector<int>>res;
      std::sort(nums.begin(), nums.end());
      for(int i=0; i<nums.size()-1; i++){
          if(nums[i] > 0 ) break;
          int j = i + 1, k = nums.size() -1;
          while( j < k ){
              int sum = nums[i] + nums[j] + nums[k];
              if(nums[i] + nums[j] > 0 ) break;
              if( sum == 0 ){
                  s.insert({nums[i], nums[j], nums[k]});
                  j++;
                  k--;
              }else if( sum > 0 ) --k;
              else ++j;
          }
      }
      for(auto ptr : s) res.push_back(ptr);
      return res;
    }
};
