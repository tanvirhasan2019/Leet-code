class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        std::vector<int>result;
        int j=0;
        for(int i=0; i<nums.size(); i++){
            if(i % 2 == 0) j = nums[i];
            else{
                while(j > 0){
                    result.push_back(nums[i]);
                    j--;
                }
            }
        }
        return result;
    }
};
