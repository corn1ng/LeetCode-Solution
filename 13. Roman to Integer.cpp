class Solution {
public:
    
//计数规则：
//1. 若干相同数字连写表示的数是这些罗马数字的和，如 III=3；
//2. 小数字在大数字前面表示的数是用大数字减去小数字，如 IV＝4；
//3. 小数字在大数字后面表示的数是用大数字加上小数字，如 VI=6;
   int romanToInt(string s) 
{
    unordered_map<char, int> T = { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };                     
   int sum = T[s.back()];
   for (int i = s.length() - 2; i >= 0; --i) 
   {
       if (T[s[i]] < T[s[i + 1]])
       {
           sum -= T[s[i]];
       }
       else
       {
           sum += T[s[i]];
       }
   }
   
   return sum;
}
};
