class Solution {
public:
    bool isSubsequence(string s, string t) {
        int cnt = 0, k = 0;
        for(int i=0; i<s.size(); i++){
            for(int j = k; j<t.size(); j++){
                if(s[i] == t[j]){
                    cnt++;
                    k = j+1;
                    break;
                }
            }
        }
        if(cnt == s.size()) return true;
        return false;
    }
};
