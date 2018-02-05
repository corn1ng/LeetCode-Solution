 class Solution {
public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
        if(matrix==NULL||rows<1||cols<1||str==NULL) return false;
        bool* visit= new bool[rows*cols];
        memset(visit,0,rows*cols);
        int pathLength=0;
        for(int row=0;row<rows;row++)
        {
            for(int col=0;col<cols;col++)
            {
                if(DFS(matrix,rows,cols,row,col,str,pathLength,visit))
                {
                    return true;
                }
            }
        }
        delete[] visit;
        return false;
    }
	
    bool DFS(char* matrix,int rows,int cols,int row,int col,char* str,int index, bool* visit)
    {
        if(str[index]=='\0') return true;
        bool hasPath=false;
        if(row>=0&&row<rows&&col>=0&&col<cols&&matrix[row*cols+col]==str[index]&&!visit[row*cols+col])
        {
            visit[row*cols+col]=true;
            hasPath =DFS(matrix,rows,cols,row,col-1,str,index+1,visit)
                    ||DFS(matrix,rows,cols,row-1,col,str,index+1,visit)
                    ||DFS(matrix,rows,cols,row,col+1,str,index+1,visit)
                    ||DFS(matrix,rows,cols,row+1,col,str,index+1,visit);
            if(!hasPath)
            {
                --index;
                visit[row*cols+col]=false;
            }    
        }
        return hasPath;
    }

};