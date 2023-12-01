class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int prev = 0, max_alt = 0;
        gain.insert(gain.begin(), 0);
        
        for(int i=0; i<gain.size(); i++){
            gain[i] = gain[i] + prev;
            max_alt = max(gain[i], max_alt);
            prev = gain[i];
        }
        return max_alt;
    }
};
