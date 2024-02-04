#include<iostream>
using namespace std;
float lowestPrice(int kilo, string period);
main()
{
    cout<<"Enter the number of kilometers: ";
    int kilo;
    cin>>kilo;
    cout<<"Enter the period of the day (day/night): ";
            string period;
            cin>>period;
            float result = lowestPrice(kilo,period);
            cout<<"Lowest price for "<<kilo<<" kilometers: "<<result<<" EUR";
}
float lowestPrice(int kilo, string period)
{       float result;
    if (kilo<20&&period=="day")
    { 
        result = (kilo*0.79) + 0.70;
         
    }
    if (kilo<20&&period=="night")
    {
        result = (kilo*0.90) + 0.70;
    }
    if (kilo>=20&&kilo<100)
    {
         result = kilo*0.09;
    }
    if (kilo>=100)
    {
        result = kilo*0.06;
    }
    return result;
}