## 动态规划4--数字和为SUM的方法数

#### 题目描述

给定一个有n个正整数的数组A和一个整数sum,求选择数组A中部分数字和为sum的方案数。
当两种选取方案有一个数字的下标不一样,我们就认为是不同的组成方案。

输入描述:

```
输入为两行:
 第一行为两个正整数n(1 ≤ n ≤ 1000)，sum(1 ≤ sum ≤ 1000)
 第二行为n个正整数A[i](32位整数)，以空格隔开。
```

输出描述

输出所求的方案数

```c++
#include <iostream>
#include <algorithm>
using namespace std;
const int num =10005;


int result=0;
void DFS(int num,int a[],int index,int res,int size)
{
    if(num==res)
    {
        result++;
        return;
    }
    if(index==size) return;
    DFS(num+a[index],a,index+1,res,size);
    DFS(num,a,index+1,res,size);
}
int main() {
    int n,sum;
    int a[num];
    cin>>n>>sum;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    DFS(0,a,0,sum,n);
    cout<<result<<endl;
    return 0;
}


```

递归写法，超时，DFS中，num是现在的和，a[]是数组，index表示处理的index，

a+index即表示 0到index范围内的数字都处理过了，处理有选和不选两种形式，

res 是固定的和，size 是a数组的大小。

---

正确的方法应该使用动态规划

```c++
#include <iostream>
#include <algorithm>
using namespace std;
const int num =10005;
long long dp[1000][1000];
//dp[i][j]表示用前i个值组成和为j的方案个数（
int main()
{
    int n,sum;
    cin>>n>>sum;

    int p[1000];
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
    }
//初始化dp,用前i个组成和为0的方案，只有1种，就是什么都不取，和为0；
    for(int i=0;i<n;i++)
    {
        dp[i][0]=1;
    }
    //用0个元素不能组成1~sum
    for(int j=1;j<sum;j++)
    {
        dp[0][j]=0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(p[i]<=j) 
//如果p[i]<=j，dp[i][j]=dp[i-1][j](不加j)+dp[i-1][j-p[i]](加j)
            {
                dp[i][j]=dp[i-1][j]+dp[i-1][j-p[i]];
            }
            else
            {
                dp[i][j]=dp[i-1][j]; //只有不加j的情况。
            }
        }
    }
    cout<<dp[n][sum]<<endl;
    return 0;
}
```

递归会超时，所以用动态规划，是一个01背包问题。