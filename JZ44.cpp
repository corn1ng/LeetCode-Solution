int digitAtIndex(int index)
{
    if(inde<0) return -1;
    int digit =1;
    while(true)
    {
        int numbers =countOfIntegers(digits);
        if(index<numbers)
        {
            return digitAtIndex(index,digits)
        }
        index =index-digits* numbers;
        digit++;
        return -1;
    }
}
int countOfNumbers(int digits)
{
    if(digits==1) return 10;
    int count =(int)pow(10,digits-1);
    return 9*count;
}
int digitsAtIndex(int index,int digits)
{
    int number =beginNumber(digits)+index/digits;
    int indexFromRight= digits-index%digits;
    for(int i=1;i<indexFromRight;i++)
    {
        number =number/10;
    }
    return number%10;
}
int beginNumber(int digits)
{
    if(digits==1) return 0;
    return pow(10,digits-1);
}