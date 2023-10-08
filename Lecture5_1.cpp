#include <iostream>

using namespace std;

int main(){

    int x;    //Variable a can only store a sibgle integer at a time

    //Arrays are used to store multiple values in a single variable name 
    
    //int a[5];  // Its an array of name a which can store 5 value in contegeous memory locations where index starts from 0 and goes upto 4
    
    // We can access elements by a[n] where n is the index of elements we need to access



    // This can be used when we have very less number of inputs otherwise it is inefficient
    int a,b,c,d,e;
    cout<<"Give 5 integers as input"<<endl;
    cin>>a>>b>>c>>d>>e;
    cout<<"The integers in reverse order are: "<<e<<" "<<d
<<" "<<c<<" "<<b<<" "<<a<<endl;


    // Reversing numbers using arrays because we want to take input of same data type and it will make code more efficient
    




    return 0;

}