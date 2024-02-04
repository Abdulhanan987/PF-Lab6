#include<iostream>
using namespace std;
float totalIncome(string type, float rows, float columns);
main ()
{          cout<<"Enter the screening type (Premiere/Normal/Discount): ";
             string type;
             cin>>type;
             cout<<"Enter the number of rows: ";
             float rows;
             cin>>rows;
             cout<<"Enter the number of columns: ";
             float columns;
             cin>>columns;
             float result = totalIncome(type,rows,columns);
             cout<<result;
}
float totalIncome(string type, float rows, float columns)
{         float result;
     if (type =="Premiere")
     {
          result = (12*columns)*rows;
     }
     if (type=="Normal")
     {
        result = (7.5*columns)*rows;
     }
     if (type =="Discount")
     {
        result =( 5*columns)*rows;
     }
     return result;
}