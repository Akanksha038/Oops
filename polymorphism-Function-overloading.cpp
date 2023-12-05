#include <iostream>
using namespace std;
class Math{
public:
int sum(int a,int b){
    cout<<"I am inside 1st signature"<<endl;
    return a+b;
}

int sum(int a,int b ,int c){
    cout<<"I am inside 2nd signature"<<endl;
    return a+b+c;
}

int sum(int a,float b){
    cout<<"I am inside 3rd signature"<<endl;
    return a+b+100;
}
};


int main() {

  Math one;
  cout<<one.sum(10,20);
  cout<<one.sum(10,20,30);
  cout<<one.sum(100,20.f);
}

// output:
// Destructor called
