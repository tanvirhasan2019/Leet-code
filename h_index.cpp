class Solution {
public:
    int hIndex(vector<int>& citations) {
        std::sort(citations.begin(), citations.end(), [](int a, int b){
            return a > b;
        });
        int cnt = 1;
        for(int i=0; i<citations.size(); i++){
           if( cnt <= citations[i] ) cnt++;
           else break;
        }
        return cnt - 1;
    }
};
