int maxProduct(int length)
{
    if(length<2) return 0;
    if(length==2) return 1;
    if(length==3) return 2;

    int* products= new int[length+1];
    product[0]=0;
    product[1]=1;
    product[2]=2;
    product[3]=3;

    int max =0;
    for(int i=4;i<=length;i++)
    {
        max=0;
        for(int j=1;j<=i/2;j++)
        {
            int product=prodcuts[j]*products[i-j];
            if(max<product) max =product;
            products[i]=max;
        }
    }
    max=products[length];
    delete[] products;
    return max;
}