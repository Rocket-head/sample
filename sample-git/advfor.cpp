#include<iostream>

using namespace std;

void sum0ddeven(int num,int &sum_odd,int &sum_even)
{
    for (int i = 0 ; i<= num ; i++)
    {

        if(i % 2 == 0)
        {
            //cout << i <<endl;
            sum_odd = sum_odd + i;
        }
        else
        {
            sum_even = sum_even + i;
        }
    }

}

int forloop()
{
    int sum_odd = 0;
    int sum_even = 0;
    sum0ddeven(5,sum_odd,sum_even);
    cout << sum_odd << endl;
    cout << sum_even << endl;

    return 0 ;
}

