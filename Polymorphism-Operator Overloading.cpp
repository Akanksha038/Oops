// Online C++ compiler to run C++ program online
// Operator Overloading Polymorphism
#include <iostream>
using namespace std;
class Parameter
{
    public:
    int value;
    void operator+(Parameter&Obj2)
    {
        int value1=this->value;
        int value2=Obj2.value;
        cout<<(value2-value1)<<endl;
    }
    
};

int main()
{
   Parameter Obj1,Obj2;
  
   Obj1.value=10;
   Obj2.value=5;
    Obj1+Obj2;
//   obj1.add(obj2)
  


    return 0;
}

// output:

// -5