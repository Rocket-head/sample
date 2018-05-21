#include<iostream>

using namespace std;

void demo(int v , int &r){
    // parameter v : pass by value
    // parameter r : pass by reference

    v = v + 10;
    r = r + 10;

}


int mainpass()
{
    int v =7;
    int r = 7;
    demo(v,r);
    cout << v  << endl;
    cout << r << endl;

    return 0;
}
