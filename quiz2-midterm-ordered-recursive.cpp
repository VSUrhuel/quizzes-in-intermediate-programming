#include <iostream>
using namespace std;

double factorialRecursive(int n=5);
int isWellOrdered(int x);
int countWellOrderedInRange(int s=100, int e=500);

int main()
{
    for(int i=1; i<5; i++)
        cout<<factorialRecursive(i)<<",";
    cout<<factorialRecursive();

    cout<<endl<<countWellOrderedInRange();
}
int isWellOrdered(int x)
{
    int temp = x;
    while(x>0)
    {
        if(x%10 <= temp)
        {
            temp = x % 10;
            x/=10;
        }
        else
            return 0;
    }
    return 1;
}
double factorialRecursive(int n)
{
    if(n < 2)
        return 1;
    else
        return (1/static_cast<double>(n*factorialRecursive(n-1)));
}
int countWellOrderedInRange(int s, int e)
{
    int ctr = 0;
    for(int i=s; i<e; i++)
    {
        if(isWellOrdered(i))
            ctr++;
    }
    return ctr;
}
