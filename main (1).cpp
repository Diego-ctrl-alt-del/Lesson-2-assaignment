/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
using namespace:: std;

    int age;
    string firstName, lastName;

    cout << "Enter your full name:" << endl;
    cin>> firstName >> lastName;
    
    cout << "Enter your age:"<< endl;
    cin >> age;
    
    cout << "Hello, "<< firstName << " " << lastName<<"! You are " << age <<" years old.";


    return 0;
}