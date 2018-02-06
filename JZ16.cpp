class Solution {
public:
    double Power(double base, int exponent) {
        double number = 1.0 ;
        int flag=0;
        if(exponent<0)
        {
            exponent =-exponent;
            flag=1;
        }
        for(int i=0;i<exponent;i++)
        {
            number =number*base;
        }
        if(flag==1) number=1/number;
        return number;
    }
};