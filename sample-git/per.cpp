#include<iostream>

using namespace std;

unsigned fact(unsigned  int n)
{
    //5! = 5 * 4 * 3 * 2 * 1
    if(n > 1 )
    {
        unsigned int f  ;
        f = 1;
        for (int i = 2 ; i <= n ; i++)
        {
            f = f*i;
        }
        return f;

    }
    else
    {
        return 1;
    }

}

unsigned int permute(unsigned int n, unsigned int r)
{
    return fact(n)/fact(n-r);
}

unsigned int comi(unsigned int n,unsigned int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}


int mainper()

{


    /* for(int i = 0 ;i <= 10 ;i++)
     {

         cout << fact(i) << endl;
     }
    */
    cout <<  permute(10,4) << endl;
    cout <<  comi(10,4) << endl;

    return 0;
}
