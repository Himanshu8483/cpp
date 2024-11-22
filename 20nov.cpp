// traffic light
#include <iostream>
using namespace std;
int main () {
    int num;
    cout << " Enter Number = " ;
    cin >> num;
    if ( num==1) {
       cout << "yellow" ; 
    }
    else if (num==2) {
        cout << "red" ;
    }
    else if (num==3) {
        cout << "orange" ;
    }
    else {
        cout << "wrong number" ;
    }
} 

// 10k to 20k D=10% 20k to 30k D=20% 30k to 40k D=40%
#include <iostream>
using namespace std;
int main () {
    int mrp, discount, sp;

    cout << " Enter Mark Price (Mrp) = " ;
    cin >> mrp;
    if ( mrp>=10000 && mrp<20000) {
        discount=(10*mrp)/100;
        sp=mrp-discount;
       cout << discount<<endl<<sp; 
    }
    else if ( mrp>=20000 && mrp<30000) {
        discount=(20*mrp)/100;
        sp=mrp-discount;
       cout << discount<<endl<<sp ; 
    }
    else if ( mrp>=30000 && mrp<40000) {
        discount=(40*mrp)/100;
        sp=mrp-discount;
       cout << "discount = " << discount<<endl<<"selling price = " << sp ; 
    }
    else {
        cout << "wrong mrp" ;
    }
} 

// swiping 3variables
#include <iostream>
using namespace std;
int main () {
    int a = 10;
    int b = 12;
    int temp;

    temp = b;
    b = a;
    a = temp;
    cout << a << endl << b;
}
// swiping 2 variables
#include <iostream>
using namespace std;
int main () {
    int a = 10;
    int b = 12;
    int temp;

    a = a + b;
    b = a- b;
    a = a - b;
    cout << a << endl << b;
}

// tour visit
#include <iostream>
using namespace std;
int main () {
    int choice;
    cout << "enter your choice 1 for international and 2 for domestic = ";
    cin >> choice;
    if (choice==1) {
        cout << "Choice 1 for usa and choice 2 for uk = ";
        cin >> choice;
        if (choice == 1) {
            cout << "the price of usa visit is 15000";
        }
        else if (choice == 2) {
            cout << "the price of uk visit is 12000";
        }
        else {
        cout << "wrong input";
    }
    }
    else if (choice == 2) {
        cout << "Choice 1 for India and choice 2 for Pakistan = ";
        cin >> choice;
        if (choice == 1) {
            cout << "the price of India visit is 11000";
        }
        else if (choice == 2) {
            cout << "the price of Pakistan visit is 9000";
        }
        else {
        cout << "wrong input";
    
    }
    }
    else {
        cout << "wrong input";
    }
}