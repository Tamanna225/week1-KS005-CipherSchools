#include <iostream>
using namespace std;

int main(){
    
    //cout<<i++; //post increment first print then increment
    //cout<<++i;    // pre increment first increment then print

    
    /*//Understanding pre and post increment

    int i,j,k;
    i=0;
    j=0;
    k=0;
    cout<<i<<" "<<j<<" "<<k<<endl;
    j = i++;    //post increment
    cout<<i<<" "<<j<<" "<<k<<endl;
    k =++i;     //pre increment
    cout<<i<<" "<<j<<" "<<k<<endl;
    */
    



    //Printing numbers from 1 to 100 using for loop

    int i; // storing iteration number

    for(i = 1;i<101;i++) //here i++ is post increment here we are using value of i first and then incrementing it but here it actually does not matter if we use pre or post increment
    {   
        //It will stop executing when the condition becomes false
        //This is executed for every iteration
        cout<<i<<" ";
    }

    return 0;
}