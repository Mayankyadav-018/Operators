/* Name - Mayank yadav
   Class - ENTC A
   PRN - 24070123060 */
#include <iostream>
using namespace std;
int main() {
    int english,maths,science;
    cout << "Enter marks of english:";
    cin >> english;
    cout << "Enter marks of maths:";
    cin >> maths;
    cout << "Enter marks of science:";
    cin >> science;
    int avg = (english + maths + science)/3;
    cout << "The grade of this student is: ";
    if(avg>90){
        cout << "A+";
    }
    else if(avg>=80){
        cout << "A";
    }
    else if(avg>=70){
        cout << "B";
    }
    else if(avg>=60){
        cout << "C";
    }
    else if(avg>=50){
        cout << "D";
    }
    else{
        cout << "The student has failed";
    }
    return 0;
}


/* Enter marks of english:60
Enter marks of maths:52
Enter marks of science:45
The grade of this student is: D */
