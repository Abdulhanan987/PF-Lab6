#include<iostream>
using namespace std;
float discount(string day,string month,float amount);
main ()
{
    cout<<"Enter Purchase Day: ";
    string day;
    cin>>day;
    cout<<"Enter Purchase Month: ";
    string month;
    cin>>month;
    cout<<"Enter Purchase Amount: ";
           float amount;
           cin>>amount;
           float result = discount(day,month,amount);
           cout<<"Payable Amount after discount: "<<result; 
            }
 float discount(string day,string month,float amount)          
 {           float discount = amount;
    if (day =="Sunday"||month =="October")
    {
        discount = amount - ( amount*0.1);
    }
    return discount;
 }