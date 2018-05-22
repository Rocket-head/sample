#include<iostream>

using namespace std;

double bmi(double weight,double height)
{

    return  weight/(height * height);
}

string evalbmi(double bmi)
{
    //Parallel array
    string category[] {"obese L2","obese L1","Overweight",
                       "normal","low"
                      };
    double bmiRange[] {30,25,23,18.5,0};
    for(int i = 0; i < 5 ; ++i)
    {
        if(bmi >= bmiRange[i])
        {
            return category[i];
        }
    }
}

double target(double height, double targetbmi)
{

    return height * height *targetbmi;
}

double targetweight(double bodymassindex,double height)
{
    if(bodymassindex < 18.5)
    {
        /* cout << "target weight = " << target(height,18.5)
              <<endl;
        */ return target(height,18.5);

    }
    else if(bodymassindex > 23)
    {
        /* cout << "target weight = " << target(height,23)
              << endl;
         */return target(height,23);
    }

}

int bodymass()
{

    // input
    cout << "enter weight(kg.)  height(m.)";
    double weight,height;
    cin >> weight >> height;
    // process
    double bodymassindex = bmi(weight,height);
    string evalbmi02 = evalbmi(bodymassindex);
    // output
    cout << "BMI = " << bodymassindex << endl;
    cout << "BMI category = " <<   evalbmi02 << endl;
    /* if(bodymassindex < 18.5)
     {
         cout << "target weight = " << target(height,18.5)
              <<endl;

     }
     else if(bodymassindex > 23)
     {
         cout << "target weight = " << target(height,23)
              << endl;
     }
     */
    cout << "target weight =" << targetweight(bodymassindex,height) <<endl;
    return 0;
}
