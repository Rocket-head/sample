#include<iostream>
#include<cmath>

using namespace std;

struct coor02
{
    double x,y;
};

double areanew (coor02 a, coor02 b,coor02 c)
{
    return abs((a.x * (b.y - c.y ) + b.x *(c.y - a.y) + c.x * (a.y - b.y)) * 0.5);

}
int caltri()
{

    cout << areanew({26,13}, {21,35}, {50,15}) << endl;
    return 0;
}
