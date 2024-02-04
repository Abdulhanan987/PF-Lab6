#include<iostream>
using namespace std;
string checkTitle(int, char);
main ()
{
    cout<<"Enter your age: ";
      int age;
      cin>>age;
      cout<<"Enter your gender (m/f): ";
      char gender;
      cin>>gender;
     string result = checkTitle(age,gender);
     cout<<"Your personal title is: "<<result;
}
string checkTitle(int age, char gender)
{        string result;
    if (age<16&&gender=='m')
    {
                result = "Master";
    }
    if (age>=16&&gender=='m')
    {
        result = "Mr.";
    }
         if (age<16&&gender=='f')
         {
            result = "Miss";
         }
         if (age>=16&&gender=='f')
         {
            result = "Ms.";
         }
         return result;
}