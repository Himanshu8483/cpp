// Water Tank Capacity
// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout<< "entern num = ";
//     cin>> num;
// if (num>=0 && num<=25) {
//     cout << "quarter full";
// }
// else if (num>25 && num<=50) {
//     cout << "half full";
// }
// else if (num>50 && num<=75) {
//     cout << "There-fourth full";
// }
// else if (num>75 && num<=100) {
//     cout << "full";
// }
// else {
//     cout << "invalid" ;
// }

// }

// Totat drive rupees
// #include <iostream>
// using namespace std;

// int main() {
//     int km, rs;
//     cout<< "enter km = ";
//     cin>> km;
// if (km>=0 && km<=10) {
//     rs = km*5;
//     cout<<rs;
// }
// else if (km>10 && km<=25) {
//     rs = 10*5 + (km-10)*10 ;
//     cout<<rs;
// }
// else if (km>25 && km<=50) {
//     rs = 10*5 + 15*10 + (km-25)*20 ;
//     cout<<rs;
// }
// else if (km>50) {
//     rs = 10*5 + 15*10 + 25*20 + (km-50)*25 ;
//     cout<<rs;
// }
// else {
//     cout << "wrong input";
// }
// }

// reverse any 3 digit number
// #include <iostream>
// using namespace std;

// int main() {
//     int num = 123;
//     cout<< num%10;
//     num/=10;
//     cout<< num%10;
//     num/=10;
//     cout<< num%10;
// }

// Salary incentive calculate
// #include <iostream>
// using namespace std;

// int main() {
//     int person;
//     int salary;
//     int incentive = 1000;
//     cout<< "enter salary = ";
//     cin>> salary;
    // if (salary == 20000) {
    // cout<< "enter person = ";
    // cin>> person;
    // cout << salary + (incentive * person);
    // }
    // else {
    //     cout << "wrong salary input";
    // }


// }

// cashback in mrp sp
#include <iostream>
using namespace std;

int main() {
    int mrp, sp;
    cout<< "enter mrp = ";
    cin>> mrp;
    if (mrp==1000) {
        int cashback = 200;
        sp=mrp-cashback;
        cout << sp;
        }
    else if (mrp>1000) {
        int cashback = 500;
        sp=mrp-cashback;
        cout << sp;
    }
    else {
        cout << "wrong input";
    }
    }
