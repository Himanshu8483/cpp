
// Datatype size limit check
#include <iostream>
#include <limits>
using namespace std;
int main()
    {
    int a;
    int b;
    cout<< sizeof(int)<< endl; //size of datatype int
    cout<< sizeof(float) << endl;
    cout<< sizeof(double) <<endl;
    cout<<&a<< endl; // address of variable a
    cout<<&b<< endl;
        cout<<numeric_limits<int>::min() << endl;
    cout<<numeric_limits<int>::max() << endl;
    cout<<numeric_limits<float>::max() ;
    }

// Assignment Operator
#include <iostream>
#include <limits>
using namespace std;
int main() {
    int a;
    int b;
    cout<< "enter values =  ";
    cin>>a>>b;
    cout<<(a/=b)<<endl;
}

// Logical Operator
#include <iostream>
using namespace std;
int main()
{
    int a ;
    int b ;
    cout<<"enter values = ";
    cin>>a>>b;
    cout<< (a&&b)<<endl;
    cout<< (a||b)<<endl;
    cout<< (!a)<<endl;
    cout<< "result of not operation is =" <<(!a);
}

// Relational operator
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 11;
    cout<< (a<=b);
}

// area of different patterns 
#include <iostream>
using namespace std;
int main() {
    int side;
    cout<<"enter value of side = ";
    cin>>side;
    cout<<"area of square = "<< side * side<<endl;
    int length;
    int breadth;
    cout<<"enter value of length = ";
    cin>>length;
    cout<<"enter value of breadth = ";
    cin>>breadth;
    cout<<"area of Rectangle = "<< length * breadth<<endl;
    int height;
    cout<<"enter value of height = ";
    cin>>height;
    cout<<"enter vallue of breadth = ";
    cin>>breadth;
    cout<<"area of triangle ="<< (1*height*breadth)/2<<endl;
    float radius;
    cout<<"enter value of radius =";
    cin>>radius;
    cout<<"area of circle ="<< (22*radius*radius)/7<<endl;
}

//Ternary Operator Questions 
// print Divisibile by 3,4,5 and not divisible by 7 
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number =";
    cin>>num;
    (num%3==0 && num%4==0 && num%5==0 && num%7!=0)?
    cout<<"divisble":
    cout<<"not divisible";
}

// Print only valid for Capital letters 
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter character =";
    cin>>ch;
    ('A'>=0 && 'Z'<=0)?
    cout<<"Valid Character":
    cout<<"Not Valid Character";
}

//no. validation b/w 10 to 15 
#include <iostream>
using namespace std;
int main(){
int num;
cout<<"enter number = ";
cin>>num;
(num>=10 && num<=15)?
cout<<"number is valid":
cout<<"number is invalid";
}

// Check no. is even or odd
#include <iostream>
using namespace std;
int main(){
int num;
cout<<"enter number = ";
cin>>num;
(num % 2 == 0)?
cout<<"number is even":
cout<<"number is odd";
}

// Check no is divisible by both 10 and 11 or not
#include <iostream>
using namespace std;
int main(){
 int num;
cout<<"enter number = ";
cin>>num;
(num % 10 == 0 && num % 11 == 0)?
cout<<"number is divisible":
cout<<"number is not divisible";   
}

// Citizen 
#include <iostream>
using namespace std;
int main(){
 int age;
cout<<"enter age = ";
cin>>age;
(age >= 60)?
cout<<"Senior Citizen":
cout<<"Young Citizen";   
}

// Greater Value
#include <iostream>
using namespace std;
int main(){
 int a;
 int b;
cout<<"enter values of a & b = ";
cin>>a>>b;

(a>b)?
cout<<"number a is greater":
cout<<"number b is greater";   
}

//50% ++ pass
#include <iostream>
using namespace std;
int main(){
 int percentage;
cout<<"enter percentage = ";
cin>>percentage;

(percentage>=50)?
cout<<"Pass":
cout<<"Fail";   
}

// time 
#include <iostream>
using namespace std;
int main(){
int time;
cout<<"enter time = ";
cin>>time;
(time > 12)?
cout<<"good evening":
cout<<"good morning";
}

// Profit Loss
#include <iostream>
using namespace std;
int main(){
int cp;
int sp;
cout<<"enter cp = ";
cin>>cp;
cout<<"enter sp = ";
cin>>sp;

(sp>cp)?
cout<<" Profit ":
cout<<"Loss";
}

// positive negative or zero number
#include <iostream>
using namespace std;
int main(){
int num;
cout<<"enter number = ";
cin>>num;

(num>0)?
cout<<" number is positive ":
(num==0)?
cout<<"number is zero":
cout<<"number is negative";
}

// A to Z print
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter character =";
    cin>>ch;
    (ch>='A' && ch<='Z')?
    cout<<"Valid Character":
    cout<<"Not Valid Character";
}

// A to Z & a to z
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter character =";
    cin>>ch;
    ((ch>='A' && ch<='Z')|| (ch>='a' && ch<='z'))?
    cout<<"Valid Character":
    cout<<"Not Valid Character";
}

// print only # 
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter character =";
    cin>>ch;
    (ch=='#')?
    cout<<"Valid Character":
    cout<<"Not Valid Character";
}

//  valid b/w -10 to -2
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number range =";
    cin>>num;
    (num>=-10 && num<=-2)?
    cout<<"Valid Number":
    cout<<"Not Valid Number";
}


//pattern password
#include <iostream>
using namespace std;
int main(){
    int pass;
    cout<<"enter Password =";
    cin>>pass;
    (pass==1234)?
    cout<<"Right Password":
    cout<<"Wrong Password";
}

// pattern try again option 
#include <iostream>
using namespace std;
int main(){
    int pass;
    cout << "Enter Password: ";
    cin >> pass;
    (pass == 1234)? 
    cout << "Unlock": 
    (cout << "Wrong Password! Try again: ",
    cin >> pass,
    (pass == 1234)? 
    cout << "Unlock" :
     cout << "Wrong Password! Try again!",
     cout << "last attempt",
    cin >> pass,
    (pass == 1234)? 
    cout << "Unlock" :
     cout << " Wrong Password! Your Card Will Be Block"
     
     );
}

// If else Conditions
// Citizen
#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "enter your age = ";
    cin>> age;
    if (age>60) {
        cout << "Senior Citizen";
    }
    else {
        cout << "not Senior Citizen";
    }  
}

// greater value find
#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
    cout << "enter numbers a & b = ";
    cin>> a;
    cin>> b;
    if (a>b) {
        cout << "number a is greater";
    }
    else {
        cout << "number b is greater";
    } 
}

// above 50% for pass
#include <iostream>
using namespace std;
int main() {
    int per;
    cout << "enter percentage = ";
    cin>> per;
    if (per>50) {
        cout << "pass";
    }
    else {
        cout << "fail";
    }
}

// Time
#include <iostream>
using namespace std;
int main() {
    int time;
    cout << "enter time = ";
    cin>> time;
    if (time<=12) {
        cout << "good morning";
    }
    else {
        cout << "good evening";
    }
}

// Profit Loss
#include <iostream>
using namespace std;
int main() {
    int cp;
    int sp;
    cout << "enter cp = ";
    cin>> cp;
    cout << "enter Sp = ";
    cin>> sp;
    if (cp>sp) {
        cout << "loss";
    }
    else {
        cout << "profit";
    }
}

// 6. Check no. is positive, negitive or Zero
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "enter number = ";
    cin>> num;
    if (num>0) {
        cout << "positive";
    }
    if (num=0) {
        cout << "zero";
    }
    else {
        cout << "negative";
    }
}

// valid for '#' Only
#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "enter character = ";
    cin>> ch;
    if (ch=='#') {
        cout << "valid";
    }
    else {
        cout << "not valid";
    }
}

// valid only for alphabate
#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "enter character = ";
    cin>> ch;
    if ((ch>='A' && ch<='Z')|| (ch>='a' && ch<='z'))  {
        cout << "valid";}
    else {
        cout << "not valid";
    }
}

// Mobile Pattern
#include <iostream>
using namespace std;

int main() {
    int pass;
    cout << "enter your password = ";
    cin>> pass;
    if(pass==1234)
    {
        cout<<"open";
    }
    else {
        cout << "wrong password try again";
        cin >> pass;
        if(pass==1234)
        {
            cout<<"open";
        }
        else {
            cout << "wrong password try again";
                    cin >> pass;
        if(pass==1234)
        {
            cout<<"open";
        }
        else {
            cout << "wrong password again! ";
            cout << "your Card Will Be Block";
        }
    }
}
}

// press 1 area of square, press 2 for ractangle, 3 for triangle, 4 for circle or invalid input
#include <iostream>
using namespace std;
int main() {
    int num;
    cout<< "press 1 area of square, press 2 for ractangle, 3 for triangle, 4 for circle";
    cin>> num;
    if (num==1) {
        int side;
        int area;
        cout << "Enter side for area of square = ";
        cin >> side;
        area = side * side;
        cout<< area;
    }
    else if (num==2) {
        int height;
        int width;
        int area;
        cout << "Enter height = ";
        cin >> height;
        cout << "Enter width = ";
        cin >> width;
        area = height * width;
        cout<< "Area of Rectangle is = " ;
        cout << area;
    }
    else if (num==3) {
        float height;
        float breadth;
        float area;
        cout << "Enter height = ";
        cin >> height;
        cout << "Enter breadth = ";
        cin >> breadth;
        area = (1 * height * breadth)/2;
        cout<< "Area of Triangle is = " ;
        cout << area;
    }
    else if (num==4) {
        float radius;
        float area;
        cout << "Enter radius = ";
        cin >> radius;
        area = (22 * radius * radius)/7;

        cout<< "Area of Circle is = " ;
    }
    else {
        cout << "not a valid number";
    }
}

// numbers range print
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "enter number  = ";
    cin>> num;
    if (num>=10 && num <=20) {
        cout<< "number is between 10 to 20";
    }
    else if (num>=21 && num <=30) {
        cout<< "number is between 21 to 30";
    }
    else if (num>=31 && num <=40) {
        cout<< "number is between 31 to 40";
    } 
    else {
        cout << "not a valid number";
    }
}

// Meter Bill Calculation
#include <iostream>
using namespace std;
int main() {
    int units;
    int bill;
    cout<< "enter units = ";
    cin>> units;
    cout << " Your Total Bill = ";
    if (units >=0 && units <=50) {
        bill = units * 10;
        cout<< bill ;
    }
    else if (units >=51 && units <=100) {
        bill = 50*10 + (units - 50) * 20;
        cout<< bill ;
    }
    else if (units >=101 && units <=150) {
        bill = 50*10 + 50*20 + (units - 100) * 30;
        cout<< bill ;
    }
    else if (units >=151 && units <=200) {
        bill = 50*10 + 50*20 + 50*30 + (units - 150) * 40; 
        cout<< bill ;
    }
    else {
        cout << "not a valid number";
    }
}

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

// swiping 3 variables
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

// tax calculate
#include <iostream>
using namespace std;
int main () {
    int salary, tax,actualTotal;
    cout << " Enter Your Salary = " ;
    cin >> salary;
    if ( salary>=100000 && salary<500000) {
        tax=(10*salary)/100;
        actualTotal=salary-tax;
       cout << actualTotal<<endl<<tax; 
    }
    else if ( salary>=500000 && salary<1000000) {
        tax=(20*salary)/100;
        actualTotal=salary-tax;
       cout << actualTotal<<endl<<tax; 
    }
    else if ( salary>=1000000 && salary<1500000) {
        tax=(30*salary)/100;
        actualTotal=salary-tax;
       cout << actualTotal<<endl<<tax; 
    }
    else {
        cout << "wrong input" ;
    }
} 

//  1 for 2 variable swiping and 2 for 3variable swiping
#include <iostream>
using namespace std;
int main () {
    int num, temp;
    int a = 10;
    int b = 12;
    cout << " Enter 1 for 2 variable swiping and 2 for 3 variable swiping = " ;
    cin >> num;
    if (num==1) {
    a = a + b;
    b = a- b;
    a = a - b;
    cout << a << endl << b;
    }
    else if (num==2) {
    temp = a;
    a = b;
    b = temp;
    cout << a << endl << b;
    }
    else {
        cout<< "wrong input";
    }
}


// number reverse
#include <iostream>
using namespace std;
int main () {
    int num = 123;
    cout << num%10;
    num/=10;    // num = num / 10
    cout << num%10;
    num/=10;
    cout << num%10;
}

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

// Water Tank Capacity 
#include <iostream>
using namespace std;
int main() {
    int num;
    cout<< "entern num = ";
    cin>> num;
    if (num>=0 && num<=25) {
        cout << "quarter full";
    }
    else if (num>25 && num<=50) {
        cout << "half full";
    }
    else if (num>50 && num<=75) {
        cout << "There-fourth full";
    }
    else if (num>75 && num<=100) {
        cout << "full";
    }
    else {
        cout << "invalid" ;
    }
}

// Totat drive rupees
#include <iostream>
using namespace std;
int main() {
    int km, rs;
    cout<< "enter km = ";
    cin>> km;
    if (km>=0 && km<=10) {
        rs = km*5;
        cout<<rs;
    }
    else if (km>10 && km<=25) {
        rs = 10*5 + (km-10)*10 ;
        cout<<rs;
    }
    else if (km>25 && km<=50) {
        rs = 10*5 + 15*10 + (km-25)*20 ;
        cout<<rs;
    }
    else if (km>50) {
        rs = 10*5 + 15*10 + 25*20 + (km-50)*25 ;
        cout<<rs;
    }
    else {
        cout << "wrong input";
    }
}

// reverse any 3 digit number
#include <iostream>
using namespace std;
int main() {
    int num = 123;
    cout<< num%10;
    num/=10;
    cout<< num%10;
    num/=10;
    cout<< num%10;
}

// Salary incentive calculate
#include <iostream>
using namespace std;
int main() {
    int person;
    int salary;
    int incentive = 1000;
    cout<< "enter salary = ";
    cin>> salary;
    if (salary == 20000) {
        cout<< "enter person = ";
        cin>> person;
        cout << salary + (incentive * person);
    }
    else {
        cout << "wrong salary input";
    }
}

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

// Switch
// area calculate
#include <iostream>
using namespace std;
int main() {
    int num=4;
    switch (num){
        case 1 :
            int length, breadth ;
            length = 12;
            breadth = 13;
            cout<<"area of rectangle = " << length * breadth ;
            break;
        case 2 : 
            int side ;
            side = 3;
            cout << "area of square = " << side * side ;
                break;
        case 3 :
            int height;
            length = 3;
            height = 4;
            cout << "area of triangle = " << (1 * length * height )/2  ;
            break;
        case 4 :
            int radius;
            radius = 3;
            cout << "area of circle = " << (22 * radius * radius )/ 7 ;
            break;
        default: cout << "invalid";
            break;
    }
}

// am or pm 
#include <iostream>
#include <iostream>
using namespace std;
int main() {
    int time;
    cout << "enter your time";
    cin>>time;
    switch(time/12) {
        case 0: cout<< "am";
            break;
        case 1: cout << "pm";
            break;
        default: cout << "wrong Input";
            break;
    }
}

// coffee or tea 
#include <iostream>
using namespace std;
int main() {
    char o;
    cout << "enter options a = tea b = coffee = ";
    cin>>o;
    switch(o){
        case 'a':cout << "a=choclate, b= butterscorch";
        cin>>o;
        switch (o){
            case 'a':cout << "choclate tea = ";
                break;
            case 'b':cout << "butterscorch tea";
                break;
            default:{
                cout<< "invalid";
                break;
            }
        }
        break;
        case 'b':cout << "a=especito, b= mocha";
        cin>>o;
        switch (o)
        {
            case 'a':cout << "especito tea";
                break;
            case 'b':cout << "mocha tea";
                break;
            default:{
            cout<< "invalid";
                break;
            }
        }
        break;
        default:{
            cout<< "invalid";
                break;
        }
    }
}

// goto jumping 
#include <iostream>
using namespace std;
int main() {
    cout << "Himanshu" << endl;
    goto remove;
    cout << "Jatin" << endl;   // skip
    remove:
    cout << "Yash" << endl;
    cout << "Mohit" << endl;
}

// goto reverse jumping
#include <iostream>
using namespace std;
int main() {
    int number=1;
    a:
    if (number<=10) {
        cout << "Himanshu" << endl;
        ++number;
        goto a;
    }
}

// 2 table print with goto jumping
#include <iostream>
using namespace std;
int main() {
    int number=1;
    a: 
    if (number<=10) {
        cout << 2*number << endl;
        ++number;
        goto a;
    }
}

