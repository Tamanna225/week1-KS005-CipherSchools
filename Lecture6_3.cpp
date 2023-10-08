/*  WHILE LOOP

    SYNTAX :   while(condition)

    each time checks the condition and whwnever condition becomes false loop is stoped

    Here we only have condition no updation and declaraion unlike for loop

    FOR AND WHILE CAN BE USED INTERCHANGEBALY
*/
#include <iostream>
using namespace std;

int main(){


    /*// Printing 1 to 100 using while loop
    int i = 1;   // Initialization
    while(i<101){
        cout<<i<<" ";
        i++;
    }
    */



    // BREAK:  Use to stop the loop in between
    int i;
    int input;
    i = 100;
    // User need to guess number 65 and has 100 chances
    for(i =1;i<101;i++){
        cin>>input;
        if(input == 65)     // == is evaluating not assigning
        {
            cout<<"Congrats, You have guessed the correct number";
            break;  // loop will break when input is 65
        }
    }
    return 0;
}