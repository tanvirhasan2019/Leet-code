class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_set<int>mp1(nums1.begin(), nums1.end()), mp2(nums2.begin(), nums2.end());
        std::vector<int> nm1, nm2;
        for(int x : mp1) if(mp2.count(x) == 0 ) nm1.push_back(x);
        for(int x : mp2) if(mp1.count(x) == 0 ) nm2.push_back(x);
        return {nm1, nm2};
    }
};
