#include<iostream>
using namespace std;

int  main()
{
    //psuedo random = Not truely random (But Close)

    srand(time(NULL)); //seed the numbers starting point

    int num = rand() %6 +1; //6 face dice
    int num2 = rand() %6 +1;
    int num3 = rand() %6 +1;

    cout<< num<<"\n"<<num2<<"\n"<<num3;

    return 0;

}