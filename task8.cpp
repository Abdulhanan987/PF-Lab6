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
    if (day =="Sunday"&&(month =="October"||month=="March"||month=="August"))
    {
        discount = amount - ( amount*0.1);
    }
    if (day =="Monday"&&(month=="November"||month=="December"))
    {
        discount = amount - (amount *0.05);
    }
    return discount;
 }