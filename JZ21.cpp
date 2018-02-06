//相对位置移动
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int size =array.size();
        int left =0;
        int right=size-1;
        while(left<right)
        {
            if(array[left]%2==1)
            {
                left++;
			}
            if(array[right]%2==0)
            {
                right--;
            }
            if(array[left]%2==0&&array[right]%2==1)
            {
                swap(array[left],array[right]);
                left ++;
                right --;
            }
        }
        return;
    }
};

//相对位置不动
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int size =array.size();
        vector<int> xin;
        vector<int>::iterator it1 =array.begin();
        //!!!!!!!!!!!这里有一个需要注意的点，在删除时因为数组长度是变化的，所以需要用一个指针一直遍历，同时
        //删除一个结点后，由于指向下一个结点，所以只有没删除结点的时候才it1++;
        for (it1=array.begin(); it1 != array.end();){           
            if (*it1 % 2 == 0) {
                xin.push_back(*it1);
                array.erase(it1);
            }
            else{
                it1++;
            }
        }
        vector<int>::iterator it2 =xin.begin();
        for(it2=xin.begin();it2!=xin.end();it2++)
        {
            array.push_back(*it2);
        }
        return ;
    }
};