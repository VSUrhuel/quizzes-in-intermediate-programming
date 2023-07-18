#include <iostream>
#include "Triangle.h"
#include "RightTriangle.h"
using namespace std;

int countAngleAboveSixty(double dataScr[][10], RightTriangle RT[], RightTriangle RTS[], int s);
double aveHypotheus(double dataScr[][10], RightTriangle RT[], int s);

int main()
{
    double src[2][10] = {{5,3,4,1,2,3,4,5,6,9},{9,6,5,4,3,2,1,4,3,5}};
    RightTriangle R[10], R2[10];
    int s=10, sCtr = 0;
    sCtr = countAngleAboveSixty(src, R, R2, s);
    for(int i=0; i<sCtr; i++)
    {
        cout<<R2[i].angle1()<<",";
    }
    cout<<endl<<"Average Hypothenus: "<<aveHypotheus(src, R, s);
    return 0;
}
double aveHypotheus(double dataScr[][10], RightTriangle RT[], int s)
{
    double sum = 0;
    for(int i=0; i<s; i++)
    {
        RT[i].setBase(dataScr[0][i]);
        RT[i].setHeight(dataScr[1][i]);
        sum += RT[i].hypothenuse();
    }
    return sum/s;
}
int countAngleAboveSixty(double dataScr[][10], RightTriangle RT[], RightTriangle RTS[], int s)
{
    int ctr = 0;
    for(int i=0; i<s; i++)
    {
        RT[i].setBase(dataScr[0][i]);
        RT[i].setHeight(dataScr[1][i]);
        if(RT[i].angle1()>=60)
        {
            RTS[ctr] = RT[i];
            ctr++;
        }
    }
    return ctr;
}
