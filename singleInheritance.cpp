#include<iostream>
using namespace std;
class Vehical{
    public:
    int Model_No;
    int weight;
    void Car(){
        cout<<"This is a a Car"<<endl;


    }

};

class BMW :public Vehical{

};

int main(){
    BMW B;
    B.Car();
    return 0;
}