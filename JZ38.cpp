class Solution {
public:
    vector<string> Permutation(string str) {
        int size =str.size();
        vector<string> result;
        DFS(result,0,str);
        sort(result.begin(), result.end());
        return result;
    }
    void DFS(vector<string>& result,int index, string str)
    {
        if(index==str.size()-1)
        {
            result.push_back(str);
        }
        
        for(int i=index;i<str.size();i++)
        {
            if(i!=index && str[i]==str[index])//有重复字符时，跳过，前面的i!=index是为了把i=index去掉。
                continue;
            swap(str[index],str[i]);
            DFS(result,index+1,str);
            swap(str[index],str[i]);
        }
    }
};
//首先排第一个字母，第一个字母可以和后面所有的字母交换，这些情况确定了第一个位置的所有情况，
//然后确定第二个位置,和后面所有的位置交换，当最后一个位置也确定了以后，就可以加入结果集了,换完以后还要记得换回来。
//