void printOneToMaxOfNDigits(int n)
{
    if(n<=0) return;
    char* number =new char[n+1];
    number[n]='\0';
    for(int i=0;i<10;i++)
    {
        number[0]=i+'0';
        DFS(number,n,0);
    }
    delete[] number;
}
void DFS(char* number,int length,int index)
{
    if(index==length-1)
    {
        printf(number);
        return;
    }
    for(int i=0;i<10;i++)
    {
        number[index+1]=i+'0';
        DFS(number,length,index+1);
    }
}