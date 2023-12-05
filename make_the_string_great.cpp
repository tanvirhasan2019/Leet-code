class Solution {
public:
    string makeGood(string s) {
        std::stack<char>st;
        for(int i=0; i<s.size(); i++){
            if(st.empty()){
                st.push(s[i]);
            }else{
                if((char)std::toupper(st.top()) == std::toupper(s[i]) ){
                    bool is_up_r = std::isupper(s[i]);
                    bool is_up_l = std::isupper(st.top());
                    if((is_up_r == true && is_up_l == false) || (is_up_r == false && is_up_l == true) ) st.pop();
                    else st.push(s[i]);
                }else st.push(s[i]);
            }
        }
        s = "";
        while(!st.empty()){
          s += st.top();
          st.pop();
        }
        std::reverse(s.begin(), s.end());
        return s;
    }
};
