// Online C++ compiler to run C++ program online
//same name ke attribute ko acces karna hai from different class
#include <iostream>
using namespace std;
class A
{
    public:
    int aAge;
    A(){
        aAge=500;
    }
};

class B
{
    public:
    int aAge;
    B(){
        aAge=1000;
    }
};
class C:public A,public B
{
    public:
    int Weight;
    
};

int main()
{
    C obj;
    cout<<obj.A::aAge<<" "<<obj.B::aAge<<" "<<obj.Weight<<endl;
    
  


    return 0;
}

// output:
// 500 1000 0