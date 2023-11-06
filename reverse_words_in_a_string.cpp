class Solution {
public:
    string reverseWords(string s) {
        vector<string>vec;
        string st = ;
        for(int i=0; i<s.size(); i++){
            if(s[i] == ' ' ){
                if(st.size()) vec.push_back(st);
                st = ;
            }else if(i == s.size() -1 ) {
                vec.push_back(st += s[i]);
            }
            else{
                st += s[i];
            }
        }
        st = ;
        for(int i=vec.size() - 1; i>=0; i--){
            st += vec[i];
            if(i != 0) st +=  ;
        }
        return st;
    }
};
