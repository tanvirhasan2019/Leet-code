class Solution {
public:
    int majorityElement(vector<int>& nums) {

        if(nums.size() == 1) return nums[0];

        int max_size = ceil(nums.size() / 2);

        for(int i =0; i<nums.size()-1; i++){
            int cnt = 0;
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i] == nums[j]){
                    cnt++;
                    nums.erase(nums.begin()+j);
                    j--;
                }
            }
            if(cnt >= max_size ) return nums[i];
        }
        return 0;
    }
};