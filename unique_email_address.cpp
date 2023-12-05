class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
       
       std::unordered_set<string>st;

       for(int i=0; i < emails.size(); i++){

           bool isPlusSign = false, isAtSign = false;
           string str = ;

           for(int j=0; j<emails[i].size(); j++){
              char c  = emails[i][j];
              if(c == '.'){
                 if(isAtSign) str += c;
              }else if(c == '+' && isAtSign == false){
                isPlusSign = true;
              }else if( c == '@'){
                isAtSign = true;
                isPlusSign = false;
                str += c;
              }else{
              }
           }
           st.insert(str);
           cout<<str<<endl;
       }
       return st.size();
    }
};
