#include<iostream>
using namespace std;
class abc{
    public:
    int x;
    int *y;

   


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

~abc()
    {
        delete y;

    }


};

int main(){
    abc *a=new abc(1,2);
    abc b=*a;

    delete a;
    b.print();
    return 0;
}



// output====>
// x:1
//  PTRY:0x563e7a9f9ef0 
//  Content of Y(*y): 2