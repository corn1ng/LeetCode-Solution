## BFS最短路径 — 饥饿的小易

#### 题目描述

小易总是感觉饥饿，所以作为章鱼的小易经常出去寻找贝壳吃。最开始小易在一个初始位置x_0。对于小易所处的当前位置x，他只能通过神秘的力量移动到 4 * x + 3或者8 * x + 7。因为使用神秘力量要耗费太多体力，所以它只能使用神秘力量最多100,000次。贝壳总生长在能被1,000,000,007整除的位置(比如：位置0，位置1,000,000,007，位置2,000,000,014等)。小易需要你帮忙计算最少需要使用多少次神秘力量就能吃到贝壳。

#### 输入描述:

```
输入一个初始位置x_0,范围在1到1,000,000,006
```

#### 输出描述:

```
输出小易最少需要使用神秘力量的次数，如果使用次数使用完还没找到贝壳，则输出-1
```

输入

```
125000000
```

输出

1

```c++
#include <iostream>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;
const long long mod =1000000007;
int main() {
    long long pos;
    queue<pair<long long,int> > q;
    set<long long> set1;
    cin>>pos;
    q.push(make_pair(pos,0));
    while(!q.empty())
    {
        long long s =q.front().first;
        int ci =q.front().second;
        q.pop();
        if(s%mod==0)
        {
            if(ci<100000)
            cout<<ci<<endl;
            else
                cout<<-1<<endl;
            return 0;
        }

        if(set1.find(((s<<2)+3)%mod)==set1.end())
        {
            q.push(make_pair(((s<<2)+3)%mod,ci+1));

        }
        if(set1.find(((s<<3)+7)%mod)==set1.end())
        {
            q.push(make_pair(((s<<3)+7)%mod,ci+1));
        }
        set1.insert(((s<<2)+3)%mod);
        set1.insert(((s<<3)+7)%mod);
    }
    cout<<-1<<endl;
    return 0;
}
```

#### 思路

使用BFS最短路径求解的一道题。

一个数a到`a*4+3`和`a*8+7`两个数有对应的路径。通过队列广度优先遍历就可以求解。

需要注意的点有几个，一个是设置一个set1(其实就是visit)来不让重复的元素入队列，否则队列会被撑爆。其次，第一次写的时候没注意，取出队头后，要立即把对头出队。