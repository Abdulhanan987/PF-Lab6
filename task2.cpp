#include<iostream>
using namespace std;
bool parityAnalysis(int number);
main (){
  cout<<"Enter a 3-digit number: ";
  int number;
  cin>>number;
 int result = parityAnalysis(number);
 cout<<result;
}
bool parityAnalysis(int number)
{
           int number1 = number%10;
           int number2 = number/10;
           int number3 = number2%10;
           int number4 = number2/10;
           int number5 = number4%10;
           int number6 = number1 + number3 + number5;
           if(number6%2==0&&number%2==0)
           {
            return true;
           }
           if(number6%2!=0&&number%2!=0)
           {
            return true;
           }
            
           
            
            return false;
           
}