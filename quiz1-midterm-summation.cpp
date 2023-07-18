#include <iostream>
using namespace std;

double sum();
void primeNumInRanger(int s=22, int e=54);
void powerFun(int s=5, int y=11, int p=3);

int main()
{
    cout<<sum()<<endl;

    primeNumInRanger();
    //Output: 23,29,31,37,41,43,47,53,
            //304

    powerFun();
    //Output: 125,216,343,512,729,1000,1331,
}
double sum()
{
    double n=5, fac = 0, prod = 1, sum = 1;
    for(int i=0; i<n; i++)
    {
        prod = 1;
        for(int j=1; j<=i; j++)
        {
            prod*=j;
        }
        sum += 1/static_cast<double>(prod);
    }
    return sum;
}
void primeNumInRanger(int s, int e)
{
    int temp, f=2, sum=0;
    for(int i=s; i<e; i++)
    {
        f=2;
        while(i%f > 0)
            f++;
        if(f==i)
        {
            sum += i;
            cout<<f<<",";
        }
    }
    cout<<"\n"<<sum<<endl;
}
void powerFun(int s, int y, int p)
{
    int var = 1, ctr = 0;
    for(s; s <= y; s++)
    {
        ctr = 0, var = 1;
        while(ctr < p)
        {
            var *= s;
            ctr++;
        }
        cout<<var<<",";
    }
}
