class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        std::unordered_map<int, int>mp;
        int sum = 0;
        for(int data : nums) mp[data]++;
        for(auto ptr : mp){
            if( ptr.second == 1 ) sum += ptr.first;
        }
        return sum;
    }
};
