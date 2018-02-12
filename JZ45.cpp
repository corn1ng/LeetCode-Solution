class Solution {
public:
    static bool compare(string& a,string& b)
    {
        string st1 =a+b;
        string st2 =b+a;
        return st1<st2;
    }
        
    
    string PrintMinNumber(vector<int> numbers) {
        string result;
        int size =numbers.size();
        if(size<=0) return result;
        vector<string> mystr;
        for(int i=0;i<numbers.size();i++ ){
            string s= to_string(numbers[i]);
            mystr.push_back(s);
        }
        sort(mystr.begin(),mystr.end(),compare);

        for(int i=0;i<mystr.size();i++){
            result.append(mystr[i]);
        }
        return result;
    }
};
// 三步，一，把每个int 变为string 二，排序，三 ，组合。
// to_string 把int 变为string 类型。