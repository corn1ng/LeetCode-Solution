class Solution {
public:
    char pair(char p)
    {
        char c;
        if(p=='{') c = '}';
        else if(p=='(') c = ')';
        else if(p=='[') c = ']';
        else c = ' ';
        return c;
    }
    bool isValid(string s) {
        int len =s.size();
        stack<char> list;
        for(int i=0;i<len;i++)
        {
            if(list.size()==0) 
            {
                list.push(s[i]);
                continue;
            }
            if(s[i]==pair(list.top()))
            {
                list.pop();
            }
            else
            {
                list.push(s[i]);
            }
        }
        if(list.size()==0)  return true;
        else   return false;
    }
};
