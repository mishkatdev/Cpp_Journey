#include<iostream>

void prime(int n)
{
    bool x=true;
   
   
    if(n <= 1)
    x = false;
    
    for(int i=2;i <= n/2;i++)
    {
        if(n%i == 0)
        {
        x = false;
        break;
        } 
    }

    if(x)
    std::cout<<"The Number is prime"<<std::endl;

    else
    std::cout<<"The Number is Not prime"<<std::endl;
   
   
}
int main()
{
   int a;

    std::cout<<"Enter a positive number:"<<std::endl;
    std::cin>>a;

    
    prime(a);


    return 0;
}