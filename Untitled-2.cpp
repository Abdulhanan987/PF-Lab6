#include<iostream>
using namespace std;
bool isHarshad(int number);
main()
{   cout<<"Enter numbr: ";
 int n;
 cin>>n;
   cout<<isHarshad(n);
    
}
bool isHarshad(int number)
{
    int x =1,y=0; int num1=0; int num2 = number;
    while(x>0)
    {     num1=num2%10;
         x=num2/10;
           num2 = x;
         y = y+num1; 
    }
    if(number%y==0)
    return true;
    else
    return false;
}