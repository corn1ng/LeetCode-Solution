## BFS最短路径2—买苹果

#### 题目描述

小易去附近的商店买苹果，奸诈的商贩使用了捆绑交易，只提供6个每袋和8个每袋的包装(包装不可拆分)。 可是小易现在只想购买恰好n个苹果，小易想购买尽量少的袋数方便携带。如果不能购买恰好n个苹果，小易将不会购买。

#### 输入描述:

```
输入一个整数n，表示小易想购买n(1 ≤ n ≤ 100)个苹果
```

#### 输出描述:

```
输出一个整数表示最少需要购买的袋数，如果不能买恰好n个苹果则输出-1
```

```c++
#include <iostream>
#include <queue>
using namespace std;
int main() {
    int n;
    cin>>n;
    queue<pair<int,int> > q;
    q.push(make_pair(6,1));
    q.push(make_pair(8,1));
    while(!q.empty())
    {
        int number = q.front().first;
        int bag =q.front().second;
        q.pop();
        if(number<n)
        {
            q.push(make_pair(number+6,bag+1));
            q.push(make_pair(number+8,bag+1));
        }
        if(number==n)
        {
            cout<<bag<<endl;
            return 0;  
        }        
    }
    cout<<-1;
    return 0;
}
```

#### 思路

直接BFS 广度优先遍历即可。