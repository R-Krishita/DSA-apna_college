// if n is a number in decimal form = then it will have (logn to the base 2) + 1 digits in its binary form
// for eg 8(decimal form) = 8 has 4 digits in its binary form. which is (1000)
// (logn to the base 2) + 1 = (log8 to the base 2) + 1 = 3 + 1 = 4 digits.

// Leetcode code for power x raise to n
class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1.0;
        if(x == 0) return 0.0;
        if(x == -1 && n%2 == 0) return 1.0;
        if(x == -1 && n%2 != 0) return -1.0;
        long binaryForm = n;
        if(n < 0){
            x = 1/x;
            binaryForm = -binaryForm;
        }
        double ans = 1;
        while(binaryForm > 0){
            if(binaryForm % 2 ==1){
                ans *=x;
            }
            x *= x;
            binaryForm /= 2;
        }
        return ans;
    }
};