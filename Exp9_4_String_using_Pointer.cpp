// Papri Sen
// 24070123070
// A3
#include<iostream>
using namespace std;

int main(){

    string str1="";

    cout<<"Enter the String: ";
    cin>>str1;

    string* str_ptr=&str1;

    cout<<"Entered String is: "<<*str_ptr;

    return 0;
}


/*
Output:
Enter the String: Papri
Entered String is: Papri
*/
