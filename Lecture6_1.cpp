/* Why do we really need loops??
    // For traversing
    // for repeating a similar action
    //process is repeated but action are choosed by us


    Types of loops:   

    // for loop
    // while loop
*/

#include <iostream>
using namespace std;

int main(){
    int i; // storing iteration number

    for(i = 0;i<5;i++) // Initialization happen before starting of loop       updation take place after every loop   
    {
        cout<<i<<" ";
    }

    return 0;
}