#include<iostream>
using namespace std;
bool areSameNumber(int n1, int n2, int n3);
main ()
{
    cout<<"Enter the first number: ";
    int n1;
    cin>>n1;
    cout<<"Enter the second number: ";
    int n2;
    cin>>n2;
    cout<<"Enter the third number: ";
    int n3;
    cin>>n3;
    int result = areSameNumber(n1,n2,n3);
    cout<<result;
}
bool areSameNumber(int n1, int n2, int n3)
{
       if (n1==n2&&n2==n3&&n1==n3)
       {
        return true;
       }
       else
       {
        return false;
       }
}