void printproability(int number)
{
    if(number<1) return;

    int* gailv[2];
    gailv[0] =new int[maxValue*number + 1];
    gailv[1] =new int[maxValue*number + 1];
    for(int i=0;i<maxValue;i++)
    {
        gailv[0][i]=0;
        gailv[1][i]=0;
    }
    int flag =0;
    for(int i=1;i<=maxValue;i++)
    {
        gailv[flag][i]=1;
    }

    for(int k=2;k<=number;k++)
    {
        for(int i=0;i<k;++i)
        {
            gailv[1-flag][i]=0;
        }

        for(int i=k;i<=maxValue*k;++i)
        {
            gailv[1-flag][i]=0;
            for(int j=1;j<=i&&j<=maxValue;j++)
            {
                gailv[1-flag][i]+=gailv[flag][i-j];
            }
        }
        flag =1-flag;
    }

    double total =pow((double)maxValue,number);
    for(int i=number,i<=maxValue*number;i++)
    {
        double ratio =(double) gailv[flag][i]/total;
        printf("%e\n",ratio);
    }
    delete[] gailv[0];
    delete[] gailv[1];
}