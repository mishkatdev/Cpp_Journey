#include<iostream>

class BMI
    { 
        public:
        double Height;
        double Weight;

        void count()
        {
            double bmi;

            bmi=(Weight)/(Height * Height);
            std::cout<<bmi;
        }
    };

int main()
{
    

    BMI mishkat;

    std::cout<<"******* BMI Calculator ******\n";
    std::cout<<"Enter Your Hight in Metere\n";
    std::cin>>mishkat.Height;
    std::cout<<"Enter Your Weight in Kilogram\n";
    std::cin>>mishkat.Weight;
    std::cout<<"Your BMI is:";
    mishkat.count();
    std::cout<<"\n******************************\n";
    
    return 0;
}