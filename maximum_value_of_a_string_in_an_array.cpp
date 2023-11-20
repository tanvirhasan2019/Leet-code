class Solution {
public:
    int maximumValue(vector<string>& strs) {
       int max_size = 0;
       
       for(int i=0; i<strs.size(); i++){
         bool isNumeric = true;
         for(int j=0; j<strs[i].size(); j++){
            int d = strs[i][j] - '0';
         }
         if(isNumeric)  max_size = max(max_size, std::stoi(strs[i]));
         else max_size = max(max_size, (int)strs[i].size());
       }
       return max_size;
    }
};
