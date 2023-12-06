class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sum = 1, zero_cnt = 0;
        std::vector<int>result;

        for(int x : nums){
            if(x == 0 ) zero_cnt++;
            else sum *= x;
        }

        if(zero_cnt >= 2){
            for(int i=0; i<nums.size(); i++) result.push_back(0);
        }else if(zero_cnt){
           for(int x : nums){
               if(x == 0 ) result.push_back(sum);
               else result.push_back(0);
            }
        }else{
            for(int x : nums) result.push_back(sum / x);
        }
        return result;
    }
};
