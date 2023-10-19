class Solution {
public:
    bool isValid(string s) {
        std::stack<char>stk;
        for(int i=0; i<s.size(); i++){
            if(stk.empty()) stk.push(s[i]);
            else{
                if(s[i] == '(' || s[i] == '{' || s[i] == '[' ) stk.push(s[i]);
                else{
                    if(stk.empty()) return false;
                    char c = stk.top();
                    if(s[i] == ')' && c == '(') stk.pop();
                    else if(s[i] == '}' && c == '{') stk.pop();
                    else if(s[i] == ']' && c == '[') stk.pop();
                    else return false;
                }
            }
        }
        return stk.empty() ? true : false;
    }
};
