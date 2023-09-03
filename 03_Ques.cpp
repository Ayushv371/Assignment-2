// There are 45 total pupils in the class, 25 of whom are boys. Write a program to find
// how many girls received grades "A" if 17 boys made up 80% of the students that 
// received grades "A".

#include<iostream>
using namespace std;
int main(){

int totalPupils = 45;
    int totalBoys = 25;
    int boysWithGradeA = (17 * 80) / 100;
    int girlsWithGradeA = totalBoys - boysWithGradeA;

    cout << "Girls with grade A: " << girlsWithGradeA << endl;


return 0;
}