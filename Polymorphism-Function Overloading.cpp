// Online C++ compiler to run C++ program online
//Polymorphism
#include <iostream>
using namespace std;
class Math
{
    public:
    int sum(int a,int b)
    {
        cout<<"I am inside 1st Signature:"<<endl;
        return a+b;
    }
     int sum(int a,int b,int c)
    {
        cout<<"I am inside 2nd  Signature:"<<endl;
        return a+b+c;
    }
     int sum(int a,float b)
    {
        cout<<"I am inside 1st Signature:"<<endl;
        return a+b+100;
    }
};

int main()
{
    Math One;
   cout<< One.sum(5,10)<<endl;
    cout<< One.sum(5,10,15)<<endl;
     cout<< One.sum(5,10.00f)<<endl;
    
  


    return 0;
}


// Output:
// I am inside 1st Signature:
// 15
// I am inside 2nd  Signature:
// 30
// I am inside 1st Signature:
// 115
