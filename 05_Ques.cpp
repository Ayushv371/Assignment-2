// Write a program to calculate the sum of digits of a 3 digit number.

#include<iostream>
using namespace std;
int main(){

int num;
cout<<"Enter a number: ";
cin>>num;

if(num>=100 && num<=999){
    int last = num%10;
    int middle = (num/10)%10;
    int first = num/100;
    cout<<first+middle+last;
}
else{
    cout<<"Enter a valid 3 digit number";
}

return 0;
}