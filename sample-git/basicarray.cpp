#include<iostream>

using namespace std;

void demo00()
{

    double t1 = 27.5;
    double t2 = 28.5;
    double t3 = 29.5;
    double t4 = 21.5;
    double t5 = 22.5;
    double avg = (t1+t2+t3+t4+t5)/5;
    cout << avg << endl;

}

void demo02()
{
    double sum = 0;
    double t[5]= {27.5,24,30,29,25};
    /**< t[0] .... t[4] */
    for (int i = 0 ; i < 5 ; i ++)
    {
        cout << t[i] << endl;
        sum += t[i]; /**< sum = sum + t[i] */

    }
    cout << "avg = " << sum / 5 << endl;

}

void initarray()
{
    double t[5]= {27.5,24,30,29,25};
    double a[] = {27.5,24,30,29,25}; /**< initialize */
    double b[] {27.5,24,30,29,25}; /**<  c++ 11 uniform initialize */
    char x[] {'x','e','s'};
    string  flower[] {"rose","tulip"};
    cout << flower[0]<<endl;
}

int mainarray()
{
    demo02();
    initarray();
    return 0;
}
