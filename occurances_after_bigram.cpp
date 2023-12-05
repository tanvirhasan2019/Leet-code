class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        
        std::vector<string>vec;
        
        string str = ;

        for(int i=0; i<text.size(); i++){
           if(text[i] == ' '){
               vec.push_back(str);
               str = ;
           }else{
               str += text[i];
           }
        }
        vec.push_back(str);
        
        std::vector<string>result;
       
        for(int i=0; i<vec.size()-2; i++){
          
          if(vec[i] == first){
              if(vec[i+1] == second){
                  result.push_back(vec[i+2]);
              }
          }
        }

        return result;
    }
};
