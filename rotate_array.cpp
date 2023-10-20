class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>vec(nums.size());
        for(int i=0; i<nums.size(); i++){ 
          vec[ (i + k) % nums.size() ] = nums[i];
        }
        nums = vec;
    }
};
