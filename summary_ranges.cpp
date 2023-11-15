class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        if(nums.size() == 0 ) return {};

        std::vector<string> result;
        int start_point = nums[0], cnt = 0;

        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] + 1 == nums[i] ){
                cnt++;
            }else{
                if(cnt == 0){
                    result.push_back(to_string(start_point));
                }else{
                    result.push_back( to_string(start_point) + "->" + to_string(nums[i-1]) );
                }
                cnt = 0;
                start_point = nums[i];
            }
        }
        if(cnt == 0){
            result.push_back(to_string(start_point));
        }else{
            result.push_back( to_string(start_point) + "->" + to_string(nums[nums.size() -1 ]) );
        }
        return result;
    }
};
