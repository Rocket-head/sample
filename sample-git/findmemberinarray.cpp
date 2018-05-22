#include<iostream>

using namespace std;

void demo03()
{
    double a[]{5,4,3,2,1};

    cout << sizeof(a) << endl;/**< sizeof show size of array in bytes */
    cout << sizeof(a[0]) << endl;
    for(int i = 0 ; i<sizeof(a)/sizeof(a[0]);i++)
    {
        cout << a[i] << endl;
    }

}

int mainarraym()
{

    demo03();
    return 0;
}
