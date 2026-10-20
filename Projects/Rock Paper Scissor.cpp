#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    char user,computer,check;
    int temp;

    cout<<"==================================\n";
    cout<<"     Rock ** Paper ** Scissor     \n";
    cout<<"================================== \n \n";

while(true)
{
    
    cout<<"Enter Your Choice: \n"; 
    cout<<"( r for Rock * p for Paper * s for Scissor ) \n"; 
    cout<<"Choose x to exit) \n ";
    cin>>check;
    cout<<"\n";

    if(check=='x')
    {
        break;
    }

    else
    user=check;

    srand(time(NULL));
    temp=rand()%3 +1 ;
    
    switch (temp)
    {
    case 1:
        computer='r';
        break;
    case 2:
        computer='p';
    case 3:
        computer='s';
    default:
        break;
    }


    if(user =='r')
    {
        if(computer =='r')
        {
        cout<<"You Choose: Rock \n";
        cout<<"Computer Choose: Rock \n";
        cout<<"It's a Tie \n";
        }

        else if(computer =='p')
        {
        cout<<"You Choose: Rock \n";
        cout<<"Computer Choose: Paper \n";
        cout<<"Computer Wins!! \n";
        }

        else if(computer =='s')
        {
        cout<<"You Choose: Rock \n";
        cout<<"Computer Choose: Scissor \n";
        cout<<"You Win!! \n";
        }

        else
        cout<<"Invalid input";
        
    }

    else if(user =='p')
    {
        if(computer =='r')
        {
        cout<<"You Choose: Paper \n";
        cout<<"Computer Choose: Rock \n";
        cout<<"You Win!! \n";
        }

        else if(computer =='p')
        {
        cout<<"You Choose: Paper \n";
        cout<<"Computer Choose: Paper \n";
        cout<<"It's a Tie \n";
        }

        else if(computer =='s')
        {
        cout<<"You Choose: Paper \n";
        cout<<"Computer Choose: Scissor \n";
        cout<<"Computer Wins!! \n";
        }

        else
        cout<<"Invalid input";
        
    }

    else if(user =='s')
    {
        if(computer =='r')
        {
        cout<<"You Choose: Scissor \n";
        cout<<"Computer Choose: Rock \n";
        cout<<"Computer Wins!! \n";
        }

        else if(computer =='p')
        {
        cout<<"You Choose: Scissor \n";
        cout<<"Computer Choose: Paper \n";
        cout<<"You Win!! \n";
        }

        else if(computer =='s')
        {
        cout<<"You Choose: Scissor \n";
        cout<<"Computer Choose: Scissor \n";
        cout<<"It's a Tie\n";
        }

        else
        cout<<"Invalid input";
        
    }

    else
    cout<<"Invalid input!!";

    cout<<"\n";
 }
    

    
cout<<"======================================";

    return 0;
}