## 排序1— n个数中最小的K个

找出n个数里最小的k个

输入描述:

```
每个测试输入包含空格分割的n+1个整数，最后一个整数为k值,n
不超过100。
```

输出描述:

```
输出n个整数里最小的k个数。升序输出
```

```c++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int number;
    while(cin>>number)
    {
        v.push_back(number);
    }
    int k = v[v.size()-1];
    v.pop_back();
    sort(v.begin(),v.end());
    for(int i=0;i<k;i++)
    {
        if(i!=k-1) cout<<v[i]<<" ";
        else cout<<v[i];
    }
    return 0;
}
```

#### 思路

直接排序就好了。