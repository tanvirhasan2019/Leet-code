class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int cnt = 0;
        std::sort(nums.begin(), nums.end());

        int left = 0, right = nums.size() - 1;
        while(left < right){
            if(nums[left] + nums[right] < target){
                cnt += right - left;
                ++left;
            }
            else --right;
        }
        return cnt;
    }
};
