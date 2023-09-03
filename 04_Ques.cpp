// Write a program to calculate the sum of the first and the second last 
// digit of a 5 digit number.

#include<iostream>
using namespace std;
int main(){

int num;
cout<<"Enter a 5 digit number: ";
cin>>num;

if(num>=10000 && num<=99999){
    int first= num/10000;
    int last= (num/10)%10;
    cout<<first+last;
}

else{
    cout<<"Enter a valid 5 digit number";
}
return 0;
}