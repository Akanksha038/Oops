#include<iostream>
using namespace std;
// int main(){
    // const int x=10;
    // cout<<x;
    // // it give error
    // x=45;
    // cout<<x;

//   Method to update value inside const variable
    // 1**************.ye pehle ke compiler me chal jata tha  but aab nahi chalta
    // const int x=10; 
    // int *p=&x;
    // *p=10;
    // cout<<x;



    // 2.method=> Update value of const variable with the help of pointer
       
       
    //    const int *a=new int(100);
        // int const *a=new int(100);  //==>this line code is same as line no. 22
    //     

    //  ****************3rd way: Pointer is constant but value is non-constant

    // int *const a=new int(100);
    // cout<<"a ki value without updation"<<" "<<*a<<endl;

    //  *a=20;
    //  cout<<"updated value of a" << " " <<*a<<endl;

    //  but ham pointer ko update nahi kar sakte 
    // int b=200;
    // a=&b;==>this give error kyuki pointer to constant hai aur esse ham pointer ki value update kar rahe hai
    



    // 4**************************** Pointer and data both constant
    // const int * const a=new int (100);
    // cout<<*a<<endl;

    //we cant modify data 
    
    // *a=200;==>it give  error: assignment of read-only location '*(const int*)a
     //we can't modify pointer
    //  int b=1000;
    //  a=&b;==>giver error: assignment of read-only variable 'a'
     














// *************************************************************************************************************


     //class me const
    //  class abc{
    //     int x;
    //     int *y;
    //        int z;
    //     public:
    //     abc(){
    //         x=0;
    //         y=new int(0);
         
    //     }
    //     //   default argumnet
    //     abc(int _x,int _y, int _z=1852){
    //         x=_x;
    //         y=new int(_y);
    //         z=_z;
    //         cout<<x<<endl<<*y<<endl<<z;


    //     }

    //     void set_x(int _val){
    //         x=_val;
    //     }
    //     void set_y(int _val){
    //         *y=_val;
    //     }

    //     int get_x() const
    //     {
    //         return x;
    //     }


    //      int get_y()  const
    //       {
    //         return *y;
    //     }

    //      int get_z() const 
    //     {
    //         return z;
    //     }

        

    //  };




    //  void print( const abc &A){
    // cout<<A.get_x()<<"  " <<A.get_y()<<endl;
    //  }
    //  int main(){
    //     abc A(20,40);

    //     // print(A);
    //     cout<<A.get_x()<<" "<< A.get_y()<<endl<<A.get_z();
    //     return 0;

    //  };



    // ***********************************************
    // const ke ander ke variable ki value kaise change kar payege 
    // by using mutable keyword

     class abc{
        mutable int x;
        int *y;
           int z;
        public:
        abc(){
            x=0;
            y=new int(0);
         
        }
        //   default argumnet
        // abc(int _x,int _y, int _z=1852){
        //     x=_x;
        //     y=new int(_y);
        //     z=_z;
        //     cout<<x<<endl<<*y<<endl<<z<<endl;


        // }

        void set_x(int _val){
            x=_val;
        }
        void set_y(int _val){
            *y=_val;
        }

        int get_x() const
        {   x=9211;
            return x;
        }


         int get_y()  const
          {
            return *y;
        }

         int get_z() const 
        {
            return z;
        }

        

     };




     void print( const abc &A){
    cout<<A.get_x()<<endl <<A.get_y()<<endl;
     }
     int main(){
        // abc A(20,40);
        abc A;

        print(A);
        // cout<<A.get_x()<<endl<< A.get_y()<<endl<<A.get_z();
        return 0;

     };


