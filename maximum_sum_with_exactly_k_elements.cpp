class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end());
        long long  sum = 0;
        
        while(k > 0){
            sum  = sum + nums[nums.size() - 1 ]; 
            ++nums[nums.size() - 1 ];
            k--;
        }
        return sum;
    }
};
