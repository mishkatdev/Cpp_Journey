#include<iostream>
using namespace std;

void Show(string Anime[],int size)
{
        for(int i=0;i<=size;i++)
        {
            cout<<Anime[i]<<"\n";
        }
}

int main()
{
    string Anime[]={"Naruto","Bleach","Pokemon","BlackClover","GinTama"};
    int size = sizeof(Anime)/sizeof(Anime[0]);

    Show(Anime,size);

    return 0;
}

/*
     for(int name : array)
     {
        cout << name ;
     }
*/