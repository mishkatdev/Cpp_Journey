#include<iostream>
#include<vector>
using namespace std;

int  main()
{
    //psuedo random = Not truely random (But Close)

    srand(time(NULL)); //seed the numbers starting point

    int num = rand() %5 +1;
    

    switch(num)
    {
        case 1: cout<<"You have won a Pen";
        break;

        case 2: cout<<"You have won a Notebook";
        break;

        case 3: cout<<"You have won a T-shirt";
        break;

        case 4: cout<<"You have won a Clock";
        break;

        case 5: cout<<"You have won a Smartwatch";
        break;
    }



    return 0;

}