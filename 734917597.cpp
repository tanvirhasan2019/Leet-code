class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int t_sum = accumulate(nums.begin(), nums.end(), 0);
        int lSum = 0;
        for(int i=0; i<nums.size(); i++){
            if(lSum == t_sum - lSum - nums[i]){
                return i;
            }
            lSum += nums[i];
        }
        return -1;
    }
};