class Solution {
public:
	void replaceSpace(char *str,int length) {
		int number=0;
        for(int i=0;i<length;i++)
        {
            if(*(str+i)==' ') number++;
        }
        int newlength =length+2*number;
        int p1 =newlength-1;
        int p2 =length-1;
        while(p1!=p2)
        {
            while(*(str+p2)!=' ')
            {
                *(str+p1)=*(str+p2);
                p1--;
                p2--;
            }
            *(str+p1)='0';
            p1--;
            *(str+p1)='2';
            p1--;
            *(str+p1)='%';
            p2--;
            p1--;
            }
	}
};
//替换空格，
//思路主要是先遍历一次链表找出有多少个空格，然后现在的链表的长度就是原来的长度加上空格个数乘2，然后设置两个指针，
//一个指向最后，一个指向前面要赋值的地方，然后一直赋值，当遇到空格的时候，把0，2，%插入进去就好了。^.^