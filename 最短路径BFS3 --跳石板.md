## 最短路径BFS3 --跳石板

#### 题目描述

小易来到了一条石板路前，每块石板上从1挨着编号为：1、2、3.......
这条石板路要根据特殊的规则才能前进：对于小易当前所在的编号为K的 石板，小易单次只能往前跳K的一个约数(不含1和K)步，即跳到K+X(X为K的一个非1和本身的约数)的位置。 小易当前处在编号为N的石板，他想跳到编号恰好为M的石板去，小易想知道最少需要跳跃几次可以到达。
例如：
N = 4，M = 24：
4->6->8->12->18->24
于是小易最少需要跳跃5次，就可以从4号石板跳到24号石板

#### 输入描述:

```
输入为一行，有两个整数N，M，以空格隔开。 (4 ≤ N ≤ 100000) (N ≤ M ≤ 100000)
```

#### 输出描述:

```
输出小易最少需要跳跃的步数,如果不能到达输出-1
```

```c++
using namespace std;
int main() {
   int N,M;
   cin>>N>>M;
   queue<pair<int,int>> q;
   set<int> visit;
   q.push(make_pair(N,0));
   while(!q.empty())
   {
       int number =q.front().first;
       int ci =q.front().second;
       q.pop();
       if(number == M)
       {
           cout<<ci<<endl;
           return 0;
       }
       if(number>M)
       {
           continue;
       }
       int i = (int)sqrt(number)+1;
       while(i>1&&number<M)
       {
           if(number%i==0&& (visit.count(i+number)<=0||visit.count(number/i+number)<=0) )
           {
               int a = i+number;
               int b = number/i+number;
               visit.insert(a);
               visit.insert(b);
               q.push(make_pair(a,ci+1));
               q.push(make_pair(b,ci+1));
               //cout<<a<<" "<<ci+1<<endl;
               i--;
           }
           else
           {
               i--;
           }
       }
   }
   cout<<-1<<endl;
   return 0;
}
```

#### 思路

使用BFS求最短路径即可。同时，**搜过的点一定不能再入队列。**

**同时，这道题因为要求一个数的所有因数，如果求数A的所有因数，从A-1枚举到1的话，一定会超时，因为时间复杂度太高了。应该使用直接取开方的方法得到B，然后，一次性判断开放数B和A/B两个数是不是因数，这样效率就高了很多**。