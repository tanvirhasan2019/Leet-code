class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1 = , str2 = ;
        int i;
        for(i=0; i<word1.size(); i++){
            str1 += word1[i];
        }

        for(i=0; i<word2.size(); i++){
            str2 += word2[i];
        }

        return str1 == str2;
    }
};
