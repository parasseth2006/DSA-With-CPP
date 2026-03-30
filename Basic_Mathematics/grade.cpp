#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<< "Enter Your Marks: ";
    cin>> marks;
    if(marks>=80 && marks<=100)
        cout<< "A";
    else if(marks>=60 && marks<=79)
        cout<< "B";
    else if(marks>=50 && marks<=59)
        cout<< "C";
    else if(marks>=45 && marks<=49)
        cout<< "D";
    else if(marks>=25 && marks<=44)
        cout<< "E";
    else
        cout<< "F"; 
    return 0;    
}