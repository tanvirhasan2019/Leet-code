class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int total_elements = nums.size();
      for(int i = 0; i<nums.size(); i++){
        if(nums[i] == val){
            total_elements--;
            nums.erase(nums.begin() + i);
            i--;
        }
      }
      return total_elements;
    }
};