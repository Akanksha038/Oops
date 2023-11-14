#include <iostream>
using namespace std;
class Animal{
private:
int weight;
public:
int age;
string type;

//destructor
~Animal()
{
cout<<"Destructor called"<<endl;
}
};


int main() {
    Animal*b=new Animal;
    b->age=20;
    // aaise Destructorcall nahi hota re dynamic ke case me 
    // ~Animal();
    
    // hamme manually delete karna padta hai
    delete b;  //aaise dynamic object creation ke case me destructor ko manually call karna padta hai
}

// output:
// Destructor called
