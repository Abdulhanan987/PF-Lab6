#include<iostream>
using namespace std;
float findGreatest(int n1,int n2,int n3);
main ()
{
    cout<<"Enter the first number: ";
    float n1;
    cin>>n1;
    cout<<"Enter the second number: ";
    float n2;
    cin>>n2;
    cout<<"Enter the third number: ";
    float n3;
    cin>>n3;
    float result = findGreatest(n1 ,n2, n3);
    cout<<"The greatest number among "<<n1<<", "<<n2<<", and "<<n3<<" is: "<<result;
}
float findGreatest(int n1,int n2,int n3)
{          float result;
         if(n1>n2 && n1>n3)
         {
             result = n1;
         }
         if (n2>n1 && n2>n3)
         {
             result = n2;
         }
         if (n3>n1 && n3>n2)
         {
             result = n3;
         }
         return result;
}