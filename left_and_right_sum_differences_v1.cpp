class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        std::vector<int>vec;
        for(int i=0; i<nums.size(); i++){
            int left_sum, right_sum;

            if(i == 0 ) left_sum = 0;
            else left_sum = std::accumulate(nums.begin(), nums.begin() + i, 0);

            if(i == nums.size() - 1 ) right_sum = 0;
            else right_sum =  std::accumulate(nums.begin() + i + 1, nums.end(), 0);
            
            vec.push_back(std::abs(left_sum - right_sum));
        }
        return vec;
    }
};
