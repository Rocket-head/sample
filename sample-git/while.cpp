#include<iostream>

using namespace std;

void demo1()
{

    int i= 1;
    while(i <= 10)
    {
        cout << i << endl;
        i++;
    }
    // while(condition){statement;}
    // use for know condition and don't know round
}

void demo2()
{
    int cnt = 0;
    int n =1;
    while(cnt < 10)
    {
        if(n % 3 == 0 || n%7 == 0)
        {
            cnt++;
            cout << n << "  ";
        }
        n++;
    }

}

int mainwhile()
{
    //demo1();
    demo2();
    return 0 ;
}
