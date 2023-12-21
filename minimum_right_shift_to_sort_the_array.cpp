class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        int pivot = 0, answer = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > nums[ (i+1)%nums.size()]){
                ++pivot;
                answer = nums.size() - (i + 1 );
            }
        }
        return pivot == 1 ? answer : -1;
    }
};
