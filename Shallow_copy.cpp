#include<iostream>
using namespace std;
class abc{
    public:
    int x;
    int *y;

    // default dumb copy constructor==>ye dy default shallow copy karta hai 
    // abc(const abc& obj){
    //     x=obj.x;
    //     y=obj.y;
    // }


    // for deep copy
    abc(const abc& obj){
        x=obj.x;
        y=new int(*obj.y);
    }
// 

    // value initialisation
    abc(int _x,int _y):x(_x),y(new int (_y)) {}
    void print() const
    {
        printf("x:%d \n PTRY:%p \n Content of Y(*y): %d \n \n",x,y,*y);
    }


};
int main(){
    abc a(1,2);
    a.print();
    abc b=a;
    b.print();

    b.x=10;
    *b.y=520;
    b.print();
    a.print();
}
