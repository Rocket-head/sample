/**< chinese zodiac  year% 12 = 1 ...11
  "Snake : 0" ,"Horse : 1","Goat : 2","Monkey : 3 ","Rooster : 4","Dog : 5",
  "Pig : 6","Rat : 7","Ox : 8","Tiger : 9","Rabbit : 10     ",
  "Dragon : 11",
  */
#include<iostream>

using namespace std;

/**< if  version  */
string zodiac_if(int y)
{
    int r = y % 12;
    if (r == 0)
    {
        return "snake";
    }
    else if (r == 1)
    {
        return "horse";
    }
    else if (r == 2)
    {
        return "goat";
    }
    else if (r == 3)
    {
        return "monkey";
    }
    else if (r == 4)
    {
        return "rooster";
    }
    else if (r == 5)
    {
        return "dog";
    }
    else if (r == 6)
    {
        return "pig";
    }
    else if (r == 7)
    {
        return "mouse";
    }
    else if (r == 8)
    {
        return "cow";
    }
    else if (r == 9)
    {
        return "tiger";
    }
    else if (r == 10)
    {
        return "rabbit";
    }
    else if (r == 11)
    {
        return "dragon";
    }
}
/**< switch  version  */
string zodiac_switch(int y)
{
    int r = y % 12;
    switch (r)
    {
    case 0:
        return "snake";
    case 1:
        return "horse";
    case 2:
        return "goat";
    case 3:
        return "monkey";
    case 4:
        return "rooster";
    case 5:
        return "dog";
    case 6:
        return "pig";
    case 7:
        return "mouse";
    case 8:
        return "cow";
    case 9:
        return "tiger";
    case 10:
        return "rabbit";
    case 11:
        return "dragon";
    }
}

/**< array version */

string zodiac(int y )
{
    string z[]{"Snake : 0" ,"Horse : 1","Goat : 2","Monkey : 3 ","Rooster : 4","Dog : 5",
  "Pig : 6","Rat : 7","Ox : 8","Tiger : 9","Rabbit : 10     ",
  "Dragon : 11"};
  return z[y%12] ;

}



int mainzodiac()
{
    for(int i = 2560 ; i < 2580 ; i++)
    {
        cout << i << " "<<zodiac_if(i) << endl;

    }
     cout << "----------------------" << endl;
     for(int i = 2560 ; i < 2580 ; i++)
    {
        cout << i << " "<<zodiac_switch(i) << endl;

    }

     cout << "----------------------" << endl;
     for(int i = 2560 ; i < 2580 ; i++)
    {
        cout << i << " "<<zodiac(i) << endl;

    }



    return 0;
}
