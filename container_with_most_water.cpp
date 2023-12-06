class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int l = 0, r = height.size() -1;
        
        while(l != r){
            int temp = std::min(height[l], height[r]);
            max_area = std::max(temp*(r-l), max_area);
            
            if(height[l] < height[r]) l++;
            else r--;
        }
        return max_area;
    }
};
