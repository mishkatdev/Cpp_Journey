#include<iostream>
using namespace std;

int  main()
{
    //psuedo random = Not truely random (But Close)

    srand(time(NULL)); //seed the numbers starting point

    int num = rand();

    cout<< num;

    return 0;

}