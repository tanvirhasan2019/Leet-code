class Solution {
public:
    string addBinary(string a, string b) {
      int len = a.size() > b.size() ? a.size() : b.size();
      string result = ;
      int carry = 0;

      int i1 = a.size() - 1 , i2 = b.size() - 1;

      for(int i=0; i<len; i++) {
          int a1 = 0, b1 = 0;

          if(i1 >= 0 ){
              a1 = a[i1] - '0';
              i1--;
          }

           if(i2 >= 0 ){
              b1 = b[i2] - '0';
              i2--;
          }

          if(a1 + b1 + carry == 3){
              carry = 1;
              result.insert(0, 1, '1');
          }
          else if(a1 + b1 +  carry == 2){
              carry = 1;
              result.insert(0, 1, '0');
          }
          else{
              result.insert(0, to_string(a1+b1+carry));
              carry = 0;
          }
      }
      if(carry == 1) result.insert(0, 1, '1');
      return result;
    }
};
