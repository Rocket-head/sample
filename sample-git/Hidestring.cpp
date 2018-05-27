#include<iostream>

using namespace std;

string hidechar(string s,int start,int len)
{
    string hs;
    for(int i = 0; i<s.size(); i++)
    {
        if(i >= start && i < start + len)
        {
            if( s[i] != ' ')
            {
                hs += 'x';
            }
            else
            {

                hs += '  ';
            }
        }
        else
        {
            hs += s[i];
        }
    }

    return hs;

}

 string hs2(string s,int start ,int len)
 {
     string hs = s;
     for(int i = 0; i< s.size();i++){
        if( i >= start && i < start +len){
            if(s[i] != ' '){
                 hs[i] = 'x';
            }

        }
     }
     return hs;
 }


int mainhidestring()
{
    //declare

    string s;
    string hide;
    // input
    cout << "enter text :" ;
    //cin >> s;
    getline(cin,s);

    //output
    hide = hs2(s,3,5);

    //process

    cout << hide << endl;
    return 0;
}
