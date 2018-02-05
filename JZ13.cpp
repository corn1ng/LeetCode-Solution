class Solution {
public:
    int calcu(int rows)
    {
        int number=0;
        while(rows!=0)
        {
            number=number + rows%10;
            rows=rows/10;
        }
        return number;
    }
    int movingCount(int threshold, int rows, int cols)
    {
       vector<int> visit(rows * cols, 0);
       DFS(0,0,rows,cols,threshold,visit);
       int number=0;
       for(int i=0;i<visit.size();i++)
       {
           if(visit[i]==1) number++;
       }
       return number;
    }
    //!!!!!!!!!!!!!!!!!!!!!!!!!!! 极易错的点  visit 要加引用。
    void DFS(int row,int col, int rows,int cols, int threshold,vector<int>& visit)
    {
        if(row>=0 && row<rows && col>=0 && col<cols && visit[row*cols+col]!=1
           &&calcu(row)+calcu(col)<=threshold)
        {
            visit[row*cols+col]=1;
            DFS(row, col-1, rows, cols, threshold, visit);
            DFS(row+1, col, rows, cols, threshold, visit);
            DFS(row-1, col, rows, cols, threshold, visit);
            DFS(row, col+1, rows, cols, threshold, visit);
        }
        return ;
    }
};