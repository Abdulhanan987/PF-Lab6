#include<iostream>
using namespace std;
float perimeter(string shape,float side);
main ()
{
    cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
        string shape;
        cin>>shape;
        cout<<"Enter the value: ";
        float value;
        cin>>value;
        float result = perimeter(shape,value);
        cout<<"The perimeter is: "<<result;
}
float perimeter(string shape,float side)
{  float result ;
    if (shape =="s")
    {
        result = 4*side;
         
    }
    if (shape =="t")
    {
         result = 3*side;
        
    }
    if (shape =="c")
    {
         result = 6.28*side;
        
    }
    if (shape=="h")
    {
         result = 6*side;
        
    }
    return result;
}