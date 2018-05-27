#include<iostream>


using namespace std;

string upper(string s)
{
    for(int i=  0 ; i < s.size(); i++)
    {
        s[i] = toupper(s[i]);   // cast s[i] -> upper
    }
    return s;

}
bool icompare (string s1,string s2)
{

  return upper(s1) == upper(s2);
}

int mainstring()
{

    string s1;
    s1 = "Blue";
    string s2;
    s2 = "berry";
    string s3 = s1 + "berry";
    string s4 = s1 + s2 ;
    /*cout << s1 << endl; // blue
    cout << s2 << endl; // berry
    cout << s3 << endl; // blueberry
    cout << s4 << endl; // blue berry

    cout << s1.size() << endl; // 5
    cout << s3.size() << endl; // 10


    cout << s3.substr(0,4) << endl; // blue
    cout << s3.substr(4) << endl; //berry

    if(upper(s1) == "BLUE")    // case sensitive
    {
        cout << "equal" << endl;
    }
    else
    {

        cout << "not equal" << endl;
    }

    cout << upper(s1) << endl; // upper(Blue) -> BLUE
    cout << boolalpha << icompare(s1,s2) << endl; // boolalpha cast 1,0 -> true false
    cout << string(20,'-') << endl;   // print '-' 20 character

    */
    string phone = "0870314854"; // 087xxxxx54
    cout << phone.replace(3,5,"xxxxx") <<endl;
    cout << phone.replace(3,5,string(5,'x')) << endl;

    int pos = s3.find('l'); // s3->blueberry
                                 //012345678
    cout << pos << endl;    // position = 1;
    cout << s3[pos] << endl;
    return 0 ;





}
