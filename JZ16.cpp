class Solution {
public:
    double Power(double x, int n) {
       if(n == 0)
            return 1;
        if(n<0){
            n = -n;
            x = 1/x;
        }
        if(n==1) return x;
        return (n%2 == 0) ? Power(x*x, n/2) : x*Power(x*x, n/2);
    }
};