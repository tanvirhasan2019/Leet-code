// decimal to binary code conversion

#include <bits/stdc++.h>
using namespace std;

string decimalConvertToBinary(int dec){
    string result = "";
    int temp;
    while(dec > 0){
      temp = dec % 2;
      dec = dec / 2;
      result += temp + '0';
    }
    reverse(result.begin(), result.end());
    return result;
}


int main() {
    int dec = 13;
    cout<<"dec to bin: "<<decimalConvertToBinary(dec);
    return 0;
}
