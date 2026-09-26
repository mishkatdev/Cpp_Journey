#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Declaration of vector
    vector<int> Num;
    int size;

    cout<<"Enter The Number of Element : \n";
    cin>>size;

    cout<<"Enter "<<size<<" elements :\n";
    for(int i=0;i<size;i++)
    {   
        int n;
        cin>>n;
        Num.push_back(n); //Name.push_back(value); adding new value 
                          
    }

    cout<<"Current Total Elements : "<<Num.size()<<" \n";//Name.size(); current size of the vector
    for(int j=0;j<Num.size();j++)  
    {
        cout<<Num[j]<<"\n";
    }

    Num.pop_back();//Name.pop_back(); removing last value


    cout<<"Current Total Elements : "<<Num.size()<<" \n";
    for(int j=0;j<Num.size();j++)
    {
        cout<<Num[j]<<"\n";
    }
   

    return 0;
}