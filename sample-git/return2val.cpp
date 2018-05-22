#include<iostream>
#include<cmath>

using namespace std;

// net 107 -> (price = 100 ) ,(vat = 7);

/**< pass by pointer */

void netpartptr(double netamt,double *price,double *vat)

{
    /**< dereference */
    *price = netamt / 1.07 ; // 1.07*price = net
    *vat = netamt - *price ;
}

/**< pass by reference */
void netpartref(double netamt,double &price,double &vat)

{
    price = netamt / 1.07 ; // 1.07*price = net
    vat = netamt - price ;
}

/**< pass struct */

struct netpay
{
    double price,vat;
};

netpay netpart(double netamt)
{
    double p = netamt / 1.07;
    double v = netamt -p;
    return {p,v}  ;
    //return {netamt / 1.07,netamt - netamt/1.07};
}

int mainreturn()
{
    double price, vat;
    double netamt;

    cout << "enter price =";
    cin >> netamt ;
    netpartptr(netamt,&price,&vat);
    cout << price << endl;
    cout << vat << endl;
    cout << "--------------------" << endl;
    netpartref(netamt,price,vat);
    cout << price << endl;
    cout << vat << endl;
    cout << "--------------------" << endl;
    netpay np = netpart(netamt);
    cout << np.price << endl;
    cout << np.vat << endl;
    cout << "--------------------" << endl;


    return 0;
}

