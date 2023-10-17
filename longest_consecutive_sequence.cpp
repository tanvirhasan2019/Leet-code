class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 1) return 1;
        if(nums.size() == 0) return 0;

        sort(nums.begin(), nums.end());

        vector<int>vec;
        int len = 1;
        for(int i=0; i<nums.size()-1; i++){
           
            if(nums[i] + 1 == (nums[i+1])) {
                ++len;
            }
            else if(nums[i] == nums[i+1]) continue;
            else{
                len = 1; 
            }
            vec.push_back(len);
        }
        sort(vec.begin(), vec.end());
     
        return vec.size() == 0 ? 1 :  vec[vec.size() -1 ];
    }
};
