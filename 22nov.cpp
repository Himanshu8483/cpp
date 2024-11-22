// print 10 in all ways 
#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cout<< "enter a = ";
    cin>> a;
    cout << "enter b = ";
    cin >> b;
    if (a+b==10 || a-b==10 || a*b==10 || a/b==10 || a%b==10) {
        cout<< "10";
    }
    else {
        cout << "not valid";
    }
}

// print number for days  enter num 1 for sunday 2 for monday 3 for tuesday 4 for wed 5 for thurs 6 fri 7 for sat
#include <iostream>
using namespace std;

int main() {
    int num;
    cout<< "enter num for days print = ";
    cin>> num;
    if (num == 1) {
        cout<< "sunday";
    }
    else if (num == 2) {
        cout << "monday";
    }
    else if (num == 3) {
        cout << "tuesday";
    }
    else if (num == 4) {
        cout << "wednesday";
    }
    else if (num == 5) {
        cout << "thursday";
    }
    else if (num == 6) {
        cout << "friday";
    }
    else if (num == 7) {
        cout << "saturday";
    }
    else {
        cout << "not valid number";
    }
}

// months days print 
#include <iostream>
using namespace std;

int main() {
    int num;
    cout<< "enter num for total days of month print = ";
    cin>> num;
    if (num==4 || num==6 || num==9 || num==11) {
        cout << "30 days";
    }
    else if (num==1 || num==3 || num==5 || num==7 || num==8 || num==10 || num==12) {
cout << "31 days";
    }
    else if (num==2){
        cout << "28 or 29 days";
        cout << " enter year = ";
        cin >> num;
        if(num%4==0) {
            cout << "29days";
        }
        else {
            cout << "28days";
        }
    }
    else {
        cout << "invalid input";
    }
}


// leap year check 
#include <iostream>
using namespace std;

int main() {
    int year;
    cout<< "enter year for leap year check = ";
    cin>> year;
    if ((year%4==0 && year%100!=0 ) || year%400==0){
        cout << "leap year";
    }
    else {
        cout << "not a leap year ";
    }
}