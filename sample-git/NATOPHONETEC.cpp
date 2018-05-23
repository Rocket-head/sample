
// https://en.wikipedia.org/wiki/NATO_phonetic_alphabet
// http://www.osric.com/chris/phonetic.html
/**< "Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Golf", "Hotel", "India", "Juliet", "Kilo", "Lima", "Mike", "November", "Oscar", "Papa", "Quebec", "Romeo", "Sierra", "Tango", "Uniform", "Victor", "Whiskey", "X-ray",
            "Yankee", "Zulu" */

#include<iostream>

using namespace std;

string nato(string s){
    string NS = " ";
    string phonetic[]{"Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Golf", "Hotel", "India", "Juliet", "Kilo", "Lima", "Mike", "November", "Oscar", "Papa", "Quebec", "Romeo", "Sierra", "Tango", "Uniform", "Victor", "Whiskey", "X-ray",
            "Yankee", "Zulu"} ;
     for(int i=0;i<s.size();i++){
       NS = NS + phonetic[toupper(s[i])- 'A'] + " " ;

     }
     return NS ;
}

int mainnato()
{
    string s;
    cout << "enter text :";
    cin >> s;
    cout << nato(s) << endl;
    return 0;
}
