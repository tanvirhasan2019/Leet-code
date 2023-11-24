class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candies = 0;
        for(int i=0; i<candies.size(); i++){
            max_candies = std::max(max_candies, candies[i]);
        }

        std::vector<bool>result;
        for(int i=0; i<candies.size(); i++){
           result.push_back(candies[i] + extraCandies >= max_candies);
        }
        return result;
    }
};
