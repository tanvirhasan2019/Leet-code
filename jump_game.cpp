class Solution {
public:
    bool canJump(vector<int>& nums) {
      if(nums.size() == 1) return true;
      for(int i=0; i<nums.size(); i++){
         if(i == nums.size() - 1 ) return true;
         if( nums[i] == 0 ){
             int j = i - 1;
             bool can_jump = false;
             while( j >= 0){
                int new_pos = nums[j] + j;
                if(new_pos >= nums.size()-1) return true;

                if(nums[new_pos] == 0){
                    new_pos--;
                    while(nums[new_pos] == 0){
                        new_pos--;
                    }
                }
                if(new_pos > i){
                    can_jump = true;
                    i = new_pos;
                }
                j--;
             }
         }
      }
      return true;
    }
};
