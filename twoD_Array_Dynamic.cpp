#include<iostream>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col; 

    int **arr=new int*[row];
    for(int i=0;i<row;i++)
    {
        arr[i]=new int[col];
    }

    //print
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<"  10";
        }
        cout<<endl;
    }
    
}