#include <iostream>

using namespace std;

int main(){
    /*
    int a,b;
    cout<<"Input 2 integers a and b"<<endl;
    cin>>a;
    cin>>b;
    cout<<(a>b);    // Return 1 when a is greater than b and return 0 when a is not greater than b
    //CPP interprets True as 1
    // CPP interprets False as 0
    */


    int a,b;
    int c,d;
    
    cout<<"Input 4 integers a,b,c and d1"<<endl;
    
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    
    //
    cout<<(a>b && c>d)<<endl;     //Returns 1 when a is greater than b and c is greater than d both conditions should be satisfied
    cout<<(a>b || c>d)<<endl;        //Returns 1 when a is greater than b or c is greater than d any one condition should be satisfied


    return 0;

}