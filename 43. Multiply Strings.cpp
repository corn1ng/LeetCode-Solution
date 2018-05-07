class Solution {
public:
    string multiply(string num1, string num2) {
        int len1 = num1.size();
        int len2 = num2.size();
        if(len1==0||len2==0) return "0";
        if(num1=="0"||num2=="0") return "0";
        vector<int> v(len1+len2,0);
        for(int i=0;i<len1;i++)
        {
            for(int j=0;j<len2;j++)
            {
                v[i+j] =v[i+j] +(num1[len1-i-1]-'0') * (num2[len2-j-1]-'0');
            }
        }
        int carry = 0;
        for(int i=0;i<v.size();i++)
        {
            int num = v[i] + carry;
            v[i] = num % 10;
            carry = num / 10;
        }
        string s = "";
        int  slen =v.size()-1;
        while(v[slen]==0) slen--;
        for( ; slen >= 0; slen--)
            s += v[slen] + '0';
        return s;
    }       
};
















// 位数太多,int存不下,所以错误.
class Solution {
public:
    
   int cheng(string str,char c)
    {
        int len =str.size();
        int c1 = c - '0';
        int sum=0;
        int jinwei=0;
        int p=1;
        for(int i=len-1;i>=0;i--)
        { 
            int dan = (str[i]-'0')*c1+jinwei;
            jinwei=0;
            if(dan>10) 
            {
                int dan1= dan;
                dan = dan1%10;
                jinwei = dan1/10;
            }
            sum =sum+dan*p;
            p=p*10;
            if(i==0) 
            {
                sum =sum + jinwei*p;
            }
        }
        return sum;
    }
    
    string multiply(string num1, string num2) {
        int len1= num1.size();
        int len2= num2.size();
        int index1 =0,index2 =0;
        int p=1;
        int sum=0;
        for(int i=len2-1;i>=0;i--)
        {
            sum =sum+cheng(num1,num2[i])*p;
            p =p*10;
        }
        return to_string(sum);
    }
};





