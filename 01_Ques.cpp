// Write a program to check whether two numbers (entered by user) are equal or not.

#include<iostream>
using namespace std;
int main(){

int num1, num2;
cout<<"Enter two numbers: ";
cin>>num1>>num2;

if(num1==num2){
    cout<<"Both numbers are equal";
}
else{
    cout<<"Both numbers are not equal";
}

return 0;
}