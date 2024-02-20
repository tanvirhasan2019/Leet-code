class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> all;
        while(1){
           if(nums1.empty()){
               for(int x : nums2) all.push_back(x);
               break;
           }
           if(nums2.empty()){
               for(int x : nums1) all.push_back(x);
               break;
           }else{
              if (*nums1.begin() > *nums2.begin()) {
                    all.push_back(*nums2.begin());
                    nums2.erase(nums2.begin());
               } else {
                    all.push_back(*nums1.begin());
                    nums1.erase(nums1.begin());
                }
           }
        }
        double result = 0;
        if(all.size() % 2 == 0){
            result = (double)(all[all.size() / 2 ] + all[all.size()/2 - 1]) / 2;
        }else{
            result = all[all.size() /2 ];
        }
        return result;
    }
};
