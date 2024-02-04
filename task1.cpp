#include<iostream>
using namespace std;
bool greaterNumber(int n1,int n2);
main (){
    cout<<"Enter the first number: ";
    int number1;
    cin>>number1;
    cout<<"Enter the second number: ";
    int number2;
    cin>>number2;
  int result =  greaterNumber(number1,number2);
  cout<<result;
}
bool greaterNumber(int n1,int n2)
{
    if (n1>n2)
    {
        return true;
    }
    else 
{
    return false;
}
}