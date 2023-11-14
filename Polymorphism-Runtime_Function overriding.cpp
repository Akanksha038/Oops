/******************************************************************************

Run time Polymorphism
*******************************************************************************/
#include <iostream>

using namespace std;
class Animal{
    public:
    void speak(){
        cout<<"speaking";
}
};
class Dog:public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main()
{
    Dog d1;
    d1.speak();
  
    Animal a1;
    a1.speak();
  

    return 0;
}


// output:

// Barking
// speaking