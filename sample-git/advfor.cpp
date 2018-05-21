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

void sum02(int num,int &sum_odd,int &sum_even)

{

    for(int i = 1,j = 2 ; i <= num && j<=num ; i+=2,j += 2)
    {
        // for(var1,var2 ; condition var1 && condition var 2 ; var1 increment ,var2increment)
        sum_odd += i;
        sum_even += j;

    }
}

int forloop()
{
    int sum_odd = 0;
    int sum_even = 0;
    sum02(5,sum_odd,sum_even);
    cout << sum_odd << endl;
    cout << sum_even << endl;

    return 0 ;
}

