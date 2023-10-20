class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = 0;
        for(int i=0; i<nums.size()-1; i++){
           if(nums[i] == nums[i+1]) ++cnt;
           else { cnt = 0; }
           if(cnt == 2){
               nums.erase(nums.begin() + i );
               --i;
               --cnt;
           }
        }
        return nums.size();
    }
};
