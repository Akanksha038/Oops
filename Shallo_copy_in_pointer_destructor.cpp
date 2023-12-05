#include<iostream>
using namespace std;
class abc{
    public:
    int x;
    int *y;

   


    // value initialisation
    abc(int _x,int _y):x(_x),y(new int (_y)) {}
    

     // default dumb copy constructor==>ye dy default shallow copy karta hai 
    abc(const abc &obj){
        x=obj.x;
        y=obj.y;
    }
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


// output===>
// x:1 
//  PTRY:0x55a71a212ed0 
//  Content of Y(*y): 1517396498 
 
// free(): double free detected in tcache 2

