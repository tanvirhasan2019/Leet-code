class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string st = ;
        int i;
        for(i=0; i<word1.size(); i++){
            if( i < word2.size()){
               st += word1[i];
               st += word2[i];
            }else{
                st += word1.substr(i, word1.size());
                break;
            }
        }
        if(word2.size() > word1.size()) st += word2.substr(i, word2.size());
        return st;
    }
};
