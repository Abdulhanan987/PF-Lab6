#include<iostream>
#include<string>
using namespace std;
string calculateCost(float budget, string category, int numPeople);
float calculation , finalresult,calculateresult;
main()
{
    cout<<"Enter the budget: ";
    int budget;
    cin>>budget;
    cout<<"Enter the category (VIP/Normal): ";
    string category;
    cin>>category;
    cout<<"Enter the number of people in the group: ";
    int number;
    cin>>number;
     string result =calculateCost(budget,category,number);
              cout<<result;             
}
string calculateCost(float budget, string category, int numPeople)
{             float finalresult,calculateresult;
    string result;
    if (numPeople>=1&&numPeople<=4&&category=="Normal")
    {
            calculation = (budget -(budget*0.75));
              finalresult = numPeople*249.99;
              if (calculation>finalresult)
              {
              calculateresult = calculation-finalresult;
              result = "Yes! You have " + to_string(calculateresult) + " leva left." ;     }
              if (finalresult>calculation)
              {
               calculateresult = finalresult -calculation;
               result = "Not enough money! You need " + to_string(calculateresult)  + " leva.";  }
      }
           
    
    if (numPeople>1&&numPeople<=4&&category=="VIP")
    {
              calculation = (budget -(budget*0.75));

              finalresult = numPeople*499.99;
              {
              if (calculation>finalresult)
              calculateresult = calculation- finalresult;
              result = "Yes! You have " + to_string(calculateresult) + " leva left." ;    }
              if (finalresult>calculation)
              {
              calculateresult = finalresult -calculation;
              result = "Not enough money! You need " + to_string(calculateresult)  + " leva.";  }
       }

    
    if (numPeople>=5&&numPeople<=9&&category == "Normal")
    {
            calculation =budget - (budget*0.60);
            finalresult = numPeople*249.99;
            if (calculation>finalresult)
            {
            calculateresult = calculation- finalresult;
            result = "Yes! You have " + to_string(calculateresult) + " leva left."   ;         }
              if (finalresult>calculation)
             { calculateresult = finalresult -calculation;
             result = "Not enough money! You need " + to_string(calculateresult)  + " leva.";  }
 }
    
    if (numPeople>=5&&numPeople<=9&&category == "VIP")
    {
        calculation = (budget -(budget*0.6));
        finalresult = numPeople*499.99;
        if (calculation>finalresult)
        {
        calculateresult = calculation- finalresult;
        result = "Yes! You have " + to_string(calculateresult) + " leva left." ;     }
        if (finalresult>calculation)
        {
          calculateresult = finalresult -calculation;
          result = "Not enough money! You need " + to_string(calculateresult)  + " leva.";  }
       }

    
    if (numPeople>=10&&numPeople<=24&&category == "Normal")
    {
        calculation =(budget - (budget*0.5));
        finalresult = numPeople*249.99;
         if (calculation>finalresult)
         {
         calculateresult = calculation- finalresult;
         result = "Yes! You have " + to_string(calculateresult) + " leva left." ;           }
          if (finalresult>calculation)
          {
          calculateresult = finalresult -calculation;
          result = "Not enough money! You need " + to_string(calculateresult)  + " leva.";  }
      }
    
    if( numPeople>=10&&numPeople<=24&&category == "VIP")
    {
        calculation =budget- (budget*0.5);
        finalresult = numPeople *499.99;
        if (calculation>finalresult)
        {
        calculateresult = calculation- finalresult;
          result = "Yes! You have " + to_string(calculateresult) + " leva left." ;       }
         if (finalresult>calculation)
         {
          calculateresult = finalresult -calculation;
          result = "Not enough money! You need " + to_string(calculateresult)  + " leva.";  }
}
    
    if (numPeople>=25&&numPeople<=49&&category == "Normal")
    {
        calculation =budget - (budget*0.4);
        finalresult = numPeople *249.99;
        if (calculation>finalresult)
        {
        calculateresult = calculation- finalresult;
        result = "Yes You have " + to_string(calculateresult) + " leva left." ;         }
        if (finalresult>calculation)
        {
        calculateresult = finalresult -calculation;
        result  ="Not enough money! You need " + to_string(calculateresult)  + " leva.";  }
    }
    
    if (numPeople>=25&&numPeople<=49&&category == "VIP")
    { calculation =budget - (budget*0.4);
        finalresult = numPeople *499.99;
        if (calculation>finalresult)
    {
        calculateresult = calculation- finalresult;
        result = "Yes! You have " + to_string(calculateresult) + " leva left." ; }
        if (finalresult>calculation)
    {
        calculateresult = finalresult -calculation;
        result = "Not enough money! You need " + to_string(calculateresult)  + " leva.";  }
       }

    
    if (numPeople>=50&&category == "Normal")
    {calculation =budget - (budget*0.25);
        finalresult = numPeople *299.99;
        if (calculation>finalresult)
        {
        calculateresult = calculation- finalresult;
          result = "Yes! You have " + to_string(calculateresult) + " leva left." ;           }
        if (finalresult>calculation)
        {
        calculateresult = finalresult -calculation;
        result = "Not enough money! You need " + to_string(calculateresult)  + " leva.";  }
   }

    
    if (numPeople>=50&&category == "VIP")
    {calculation =budget - (budget*0.25);
        finalresult = numPeople *499.99;
        if (calculation>finalresult)
       { calculateresult = calculation- finalresult; 
           result =" Yes! You have " + to_string(calculateresult) + " leva left." ;           }   
        if (finalresult>calculation)
       { calculateresult = finalresult -calculation;
           result = "Not enough money! You need " + to_string(calculateresult)  + " leva.";  }

}
           return result;
}