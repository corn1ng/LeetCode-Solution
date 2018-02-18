class Solution {
public:
    int Sum_Solution(int n) {
        int ans = n;
        ans && (ans += Sum_Solution(n - 1));
        return ans;
    }
};
//&&就是逻辑与，逻辑与有个短路特点，前面为假，后面不计算。