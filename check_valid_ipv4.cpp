#include <bits/stdc++.h>
using namespace std;


int main() {
    // Write C++ code here
    string ipStr = "192.168.1";
    cout<<"IP: "<<ipStr<<std::endl;
    
    int numDot = 0;
    bool isValid = true;
    string max_rng = "";

    for(int i=0; i<ipStr.size(); i++){
      
      if(ipStr[i] == '.'){
        ++numDot;
        if(numDot > 3 ) { 
            isValid = false;
            break;
        }
      }else {
          max_rng += ipStr[i];
          if(stoi( max_rng) > 255) {
            isValid = false;
            break;
        }
      }
      
       
       
        
      if(i != 0){
          if(ipStr[i-1] == '.' && ipStr[i] == '.') {
              isValid = false;
              break;
          }
      }
    }
    
    if(isValid) cout<<" IP is Valid.";
    else cout<<"IP is invalid.";

    return 0;
}
