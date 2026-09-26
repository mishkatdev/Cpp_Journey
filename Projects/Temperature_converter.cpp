#include<iostream>

int main()
{
   double temp;
   char unit;
   

   // Input

   std::cout<<"***** Temperature Converter *****\n";
   std::cout<<"Enter F for Farhenheit\n";
   std::cout<<"Enter C for Celcious\n";
   std::cout<<"What unit do you want to convert : ";
   std::cin>>unit;
   

   //Conversion
   if(unit == 'F' || unit =='f')
   {
    std::cout<<"Enter temperature in Celcious :";
    std::cin>>temp;

    temp=(1.8*temp)+32.0;
    std::cout<<"The temperature is "<<temp<<" F\n";
   }
   
   else if(unit == 'C' || unit =='c')
   {
    std::cout<<"Enter temperature in Fahrenheit :";
    std::cin>>temp;

    temp=(temp-32.0)/1.8;
    std::cout<<"The temperature is "<<temp<<" C\n";
   }

   else
   std::cout<<"Please Enter a valid input\n";


   std::cout<<"***** ********************* *****";


    return 0;
}
