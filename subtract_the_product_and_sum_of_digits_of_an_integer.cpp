class Solution {
public:
    int subtractProductAndSum(int n) {
        int pr_d_sum = 1, sum_d_sum = 0;
        while(n > 0){
            pr_d_sum *= n % 10;
            sum_d_sum += n % 10;
            n = n / 10;
        }
        return pr_d_sum - sum_d_sum;
    }
};
