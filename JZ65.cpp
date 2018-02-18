class Solution {
public:
    int Add(int num1, int num2)
    {
        int sum,carry;
        do
        {
            sum =num1^num2;
            carry =(num1&num2)<<1;
            num1 =sum;
            num2 =carry;
        }
        while(num2!=0);
        return num1;
    }
};
// 循环是因为 carry+sum 产生的进位可能不止一个，所以一直把所有进位都加上。