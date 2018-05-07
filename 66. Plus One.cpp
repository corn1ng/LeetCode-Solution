class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
        if(digits.size()==0)
        {
            return res;
        }
        int len =digits.size();
        int i=1;
        if(digits[len-1]==9)
        {   //若最后一位是9的话，进行判断，从后往前找到第一个不是9的数字，
            for(i=len-1;i>=0;i--)
            {
               if(digits[i]!=9) break;
               else digits[i]=0;
            }
            if(i==-1)
            {
                digits.insert(digits.begin(),1);
                return digits;
            }
            else
            {
                digits[i]=digits[i]+1;
                return digits;
            }
        }
        else
        {
            digits[len-1]++;
            return digits;
        }
      
    }
};
