#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int  main()
{
    //psuedo random = Not truely random (But Close)

    srand(time(NULL)); //seed the numbers starting point

    int num = rand() %100 +1; //6 face dice
    int guess,tries=0;

    cout<<"<=========== Number Guessing Game ==========> \n \n";

    do{
        cout<<"Enter a number between 1-100: \n";
        cin>>guess;
        tries++;

        if(guess>num)
        {
            cout<<"Too high! \n";
        }

        else if(guess<num)
        {
            cout<<"Too low! \n";
        }

        else
        {
            cout<<"Correct || Number of tries:"<<tries<<'\n';
        }

    }while(guess != num);
    

    
cout<<"================================================";
    


    return 0;

}