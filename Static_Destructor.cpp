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
  Animal a;
  a.age=20;
}

// output:
// Destructor called
