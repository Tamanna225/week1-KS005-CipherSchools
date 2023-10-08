#include <iostream>

using namespace std;

int main(){
    /*float a,b;
    cout<<"Give 2 floating point numbers as input";
    cin>>a>>b;
    if(a>0.01 && b>a)   // Both conditions should be true because we are using and here 
    {
        cout<<"The condition in if is correct";    //Will only be printed if 1st user input value is greater than 0.01 and second is greater than a;
    }
    else{
        cout<<"The condition is false";  //Will be printed when if condition is false
    }


    if(a>0.01 || b>a)   // any one condition should be true because we are using or here 
    {
        cout<<"The condition in if is correct";    //Will only be printed if 1st user input value is greater than 0.01 or second input is greater than first;
    }
    else{
        cout<<"The condition is False";     //Will be printed when if condition is false
    }



    int marks;
    cout<<"Student, please enter the marks to calculate the grade :  "<<endl;
    cin>>marks;
    if(marks>90){
        cout<<"A";
    }
    if(marks<90 && marks>80){
        cout<<"B";
    }
    if(marks<80 && marks>70){
        cout<<"c";
    }
    if(marks<70){
        cout<<"Passs";
    }

    // Using else if

    if(marks>90){
        cout<<"A";
    }
    else if(marks>80){
        cout<<"B";
    }
    else if(marks>70){
        cout<<"c";
    }
    else{
        cout<<"Passs";
    }






    int a,b,c,d;
    cout<<"Give four integers as input:  a,b,c,d"<<endl;
    cin>>a>>b>>c>>d;
    if(a>b && c>d){
        cout<<"haha";
    }
    else if(a>b && c<d){
        cout<<"hehe";
    }
    else if(a<b && c>d){
        cout<<"huhu";
    }
    */


    // using switch cases

    int a;

    cout<<"Enter an integer a: "<<endl;
    cin>>a;
    switch(a){
        case 1:
            cout<<"The value of a is 1 ";
            break;      //This is necessary because otherwise all the next statements will be printed
        case 2:
            cout<<"The value of a is 2 ";
            break;
        case 3:
            cout<<"The value of a is 2 ";
            break;
        default:
            cout<<"This is default";   //This will be printed when other statements are not true
            break;
    }

    return 0;
}