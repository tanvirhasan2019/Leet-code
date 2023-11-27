class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        std::vector<int>result;
        for(int i=0; i<nums.size(); i++){
            int left = i-1, right = i + 1, cnt = 0;
            while(left >=0 ){
                if(nums[left] < nums[i]) ++cnt;
                left--;
            }
            while(right <= nums.size()-1 ){
                if(nums[right] < nums[i]) ++cnt;
                right++;
            }
            result.push_back(cnt);
        }
        return result;
    }
};
