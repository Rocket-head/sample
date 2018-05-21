#include<iostream>
#include<iomanip>

using namespace std;

void box()
{
    for(int i = 1 ; i<= 10 ; i ++){
        for(int j = 1 ;j <= 10 ;j++){
            cout << "*" ;
        }
        cout << endl;
    }
}

void box2(int w ,int h){
    for (int i = 1;i <= h ; i++ ){
        for(int j = 1 ; j <= w ;j++){
            cout << "*" ;
        }
        cout << endl;
    }

}

void printnumber(){
    /* 1
    22
    333
    .
    .
    999999999
    */
    for(int i = 1 ; i<= 9 ;i++ ){

            for(int j = 1 ; j<= i ; j++)
            {

                cout << i ;
            }
             cout << endl;

    }
}

void mutabletable(){
     for(int i = 1 ; i <= 12 ;i++){
              for (int j = 2 ; j <= 5 ;j++){
                cout << setw(3) << j << " * " <<setw(3)<<  i << " = " << setw(3) <<  j*i << endl;
              }
              cout << endl;
     }
}

int nasted()

{
    //box();
    //box2(10,10) ;
    //printnumber();
    mutabletable();
    return 0;
}
