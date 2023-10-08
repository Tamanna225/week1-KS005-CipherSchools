#include <iostream>
using namespace std;


int main(){
    
    /*
    DO WHILE LOOP
    First execute then check condition
    Will be executed at least once
    Ex: Password checking
    
    */



   /*
   //   Password checking using just while
    int password;
    cout<<"Enter the password: ";
    cin>>password;
    while(password<999999){
        cout<<"The password does not meet the required conditions, Please enter the password again"<<endl;
        cin>>password;
    }
    cout<<"The user has entered a correct password"<<endl;
    */


   /*
    // Password checking using do while
    int password;
    do{
        cin>>password;
    }
    while(password<999999);
    */

   /*
   //Infinite while loop

   while(1) // Always true
   {
        cout<<"choclates ";
   } 
    */


   /*
   // Breaking the above infinite loop using break in if
    int count = 0;
    while(1) // Always true
   {
        cout<<"choclates ";
        count++;
        if(count>100){
            break;
        }
   } 
   */


  /*
   // Infinite for loop
    int i;
    for(i = 0;;i++){
        cout<<i<<" ";
    }
    */

   // Breaking above infinite loop using break in if
    int i;
    for(i = 0;;i++){
        cout<<i<<" ";
        if(i>100)
        {
            break;  //Will be executed when i is 101
        }
    }
    return 0;
}