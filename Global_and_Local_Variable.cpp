#include<iostream>
using namespace std;
int x=100;
int main(){
    x=4;//this is global variable
    int x=500;//local variable to main function
    
    cout<<x<<endl; //acces or print local variable
    cout<<::x<<endl;//I can access or print global variable
}