// Design a calculator to perform basic arithmetic operations (+,-,/,*,%)

#include<iostream>
using namespace std;
int main(){

float x,y;
cout<<"Enter two numbers: ";
cin>>x>>y;

cout<<"Sum = "<<x+y<<endl;
cout<<"Difference = "<<x-y<<endl;
cout<<"Product = "<<x*y<<endl;
cout<<"Division = "<<x/y<<endl;

return 0;
}