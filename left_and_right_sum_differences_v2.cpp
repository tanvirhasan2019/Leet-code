class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        std::vector<int>vec;
        int sum = std::accumulate(nums.begin(), nums.end(), 0);
        int left_sum = 0;
        for(int i=0; i<nums.size(); i++){
            int right_sum = sum - left_sum - nums[i];
            vec.push_back(std::abs(left_sum - right_sum));
            left_sum += nums[i];
        }
        return vec;
    }
};
