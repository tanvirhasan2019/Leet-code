class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long long reversed = 0;
        long long  temp = x;
        while(x > 0){
            reversed = x % 10 + reversed * 10;
            x /= 10;
        }
        return (reversed == temp);
        // std::vector<int>vec;
        // while( x > 0 ){
        //     vec.push_back(x % 10);
        //     x = x /10;
        // }
        // bool isPalindrome = true;
        // for(int i=1; i<=vec.size() / 2; ++i){
        //     if( vec[i-1] != vec[vec.size() - i]) isPalindrome = false;
        // }
        // return isPalindrome;
    }
};
