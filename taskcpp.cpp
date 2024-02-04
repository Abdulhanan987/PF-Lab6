#include<iostream>
using namespace std;
float findGreatest(int number_1, int number_2, int number_3);
main()
{
    float number_1, number_2, number_3;
    cout<<"Enter the first number: ";
    cin>>number_1;
    cout<<"Enter the second number: ";
    cin>>number_2;
    cout<<"Enter the third number: ";
    cin>>number_3;
    float result=findGreatest(number_1, number_2, number_3);
    cout<<"The greatest number among "<<number_1<<", "<<number_2<<", and "<<number_3<<" is: "<<result;
}
float findGreatest(int number_1, int number_2, int number_3)
{
    if((number_1>number_2)&&(number_1>number_3))
    {
return number_1;
    }
    if((number_2>number_1)&&(number_2>number_3))
    {
        return number_2;
    }
    else
    {
        return number_3;

}
}