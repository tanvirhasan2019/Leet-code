class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        std::vector<int>result;
        for(int i=0; i<nums.size()/2; i++){
            result.push_back(nums[i]);
            result.push_back(nums[n]);
            n++;
        }
        return result;
    }
};
