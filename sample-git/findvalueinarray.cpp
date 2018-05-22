#include<iostream>

using namespace std;

int mainfind()
{
    double s[] {9,8,7,6,5,10};
    double sum = 0;
    double maximim = s[0];
    double minimum = s[0];
    for(int i = 0; i< sizeof(s)/sizeof(s[0]); i++)
    {
        sum = sum + s[i];
        if(s[i] < minimum)
        {
            minimum = s[i];
        }
        if(s[i] > maximim)
        {
            maximim = s[i];
        }
    }

    cout << "sum = " << sum << endl;
    cout << "avg = " << sum / (sizeof(s)/sizeof(s[0])) << endl;
    cout << "min = " << minimum << endl;
    cout << "max = " << maximim << endl;
    return 0;
}
