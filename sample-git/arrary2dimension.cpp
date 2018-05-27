#include<iostream>


using namespace std;

int collum = 3;
int mainarray2dimen()
{
    int d[][collum]
    {
        {10,4,1},
        {10,5,4}

    };


    cout << sizeof(d) <<endl;
    cout << sizeof(d[0]) << endl;
    cout << sizeof(d[0][0]) << endl;
    size_t row = sizeof(d)/sizeof(d[0]);
    size_t col = sizeof(d[0])/sizeof(d[0][0]);

    cout << row << endl;
    cout << col << endl;
    for(int i = 0; i < row ; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << d[i][j] << "   ";
        }
        cout << endl;
    }
    return 0;
}
