#include <iostream>
using namespace std;
int main(){
/*
    // Taking 5 numbers as input and printing them usng arrays
    int a[5];
    int i;
    cout<<"Give 5 integers as input: "<<endl;

    for(i =0; i<5;i++){
        cin>>a[i];
    }

    cout<<"The 5 given inputs are : "<<endl;
    for(i = 0; i<5;i++){
        cout<<a[i]<<" ";
    }
*/



    // Taking 10 numbers as user inputs and printing them in reverse order
    int a[10];
    int i;
    cout<<"Give 10 integers as input: "<<endl;

    for(i =0; i<10;i++){
        cin>>a[i];      //Taking 10 integers as input
    }

    cout<<"The 10 given inputs in reverse order are : "<<endl;
    for(i = 9; i>=0;i--)        // reverse the array because printing largest index element first and then decrementing their values
    {
        cout<<a[i]<<" ";
    }


    return 0;
}