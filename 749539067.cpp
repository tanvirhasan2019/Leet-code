class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;
        for(int i=0; i<s.size(); i++){
            if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
                if(stk.empty()){
                    return false;
                }
                char c = stk.top();
                stk.pop();
                if(s[i] == ')' && c != '('){
                    return false;
                }else if(s[i] == '}' && c != '{' ){
                    return false;
                }else if(s[i] == ']' && c != '['){
                    return false;
                }
            }else{
                stk.push(s[i]);
            }
        }
        if(stk.empty()){
            return true;
        }else{
            return false;
        }
    }
};