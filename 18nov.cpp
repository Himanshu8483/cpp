// Assignment Operator :
# include <iostream>
# include <limits>
using namespace std;
int main() {
    int a;
    int b;
    cout<< "enter values = ";
    cin>>a>>b;
    // cout<<(a+=b)<<endl;
    // cout<<(a-=b)<<endl;
    // cout<<(a*=b)<<endl;
    cout<<(a/=b)<<endl;
    // cout<<(a%=b);
}

// // Datatypes Limit check
// # include <iostream>
// # include <limits>
// using namespace std;
// int main()
// // {
// // int a;
// // int b;
// // cout<< sizeof(int)<< endl; //size of datatype int
// // cout<< sizeof(float) << endl;
// // cout<< sizeof(double) <<endl;
// // cout<<&a<< endl; // address of variable a
// // cout<<&b;
// // }
// {
//     cout<<numeric_limits<int>::min() << endl;
//     cout<<numeric_limits<int>::max() << endl;
//     cout<<numeric_limits<float>::max() ;
// }

// // Logical Operator

// # include <iostream>
// using namespace std;
// int main()
// {
//     // int a ;
//     // int b ;
//     // cout<<"enter a = ";
//     // cin>> a;
//     // cout<<"enter b = ";
//     // cin>> b;
//     // cout<< (a&&b)<<endl;
//     // cout<< (a||b)<<endl;
//     // cout<< (!a);

//     // Relational operator

//     int a;
//     int b;
//     cout<<"enter values";
//     cin>>a>>b;
//     cout<<(a||b)<<endl;
//     cout<< "result of not operation is =" <<(!a);
// }

// # include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int b = 11;
//     cout<< (a<=b);
// }

//     // print Divisibile by 3,4,5 and not divisible by 7

// # include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"enter number =";
//     cin>>num;
//     (num%3==0 && num%4==0 && num%5==0 && num%7!=0)?
//     cout<<"divisble":
//     cout<<"not divisible";
// }


// // Print only valid for Capital letters
// # include <iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout<<"enter character =";
//     cin>>ch;
//     ('A'>=0 && 'Z'<=0)?
//     cout<<"Valid Character":
//     cout<<"Not Valid Character";
// }

// # include <iostream>
// using namespace std;
// int main() {

// // area of different patterns
//     int side;
//     cout<<"enter value of side = ";
//     cin>>side;
//     cout<<"area of square = "<< side * side;
// }
// {
//     int length;
//     int breadth;
//     cout<<"enter value of length = ";
//     cin>>length;
//     cout<<"enter value of breadth = ";
//     cin>>breadth;
//     cout<<"area of Rectangle = "<< length * breadth;
// }
// {
//         int height;
//         int breadth;
//         cout<<"enter value of height = ";
//         cin>>height;
//         cout<<"enter vallue of breadth = ";
//         cin>>breadth;
//         cout<<"area of triangle ="<< (1*height*breadth)/2;
// }
// {
//         float radius;
//         cout<<"enter value of radius =";
//         cin>>radius;
//         cout<<"area of circle ="<< (22*radius*radius)/7;
// }


//     //Ternary Operator

// # include <iostream>

// using namespace std;
// int main()
// // {
// // int num;
// // cout<<"enter number = ";
// // cin>>num;
// // (num>=10 && num<=15)?
// // cout<<"number is valid":
// // cout<<"number is invalid";
// // }

// // Check no. is even or odd
// // {
// // int num;
// // cout<<"enter number = ";
// // cin>>num;
// // (num % 2 == 0)?
// // cout<<"number is even":
// // cout<<"number is odd";
// // }

// // Check no is divisible by both 10 and 11
// // {
// //  int num;
// // cout<<"enter number = ";
// // cin>>num;
// // (num % 10 == 0 && num % 11 == 0)?
// // cout<<"number is divisible":
// // cout<<"number is not divisible";   
// // }

// // Citizen 
// // {
// //  int age;
// // cout<<"enter age = ";
// // cin>>age;
// // (age >= 60)?
// // cout<<"Senior Citizen":
// // cout<<"Young Citizen";   
// // }

// // Greater Value

// // {
// //  int a;
// //  int b;
// // cout<<"enter values of a & b = ";
// // cin>>a>>b;

// // (a>b)?
// // cout<<"number a is greater":
// // cout<<"number b is greater";   
// // }

// // 50% ++ pass
// // {
// //  int percentage;
// // cout<<"enter percentage = ";
// // cin>>percentage;

// // (percentage>=50)?
// // cout<<"Pass":
// // cout<<"Fail";   
// // }

// // {
// // int time;
// // cout<<"enter time = ";
// // cin>>time;
// // (time > 12)?
// // cout<<"good evening":
// // cout<<"good morning";
// // }

// // Profit Loss
// // {
// // int cp;
// // int sp;
// // cout<<"enter cp = ";
// // cin>>cp;
// // cout<<"enter sp = ";
// // cin>>sp;

// // (sp>cp)?
// // cout<<" Profit ":
// // cout<<"Loss";
// // }

// // positive negative or zero number
// // {
// // int num;
// // cout<<"enter number = ";
// // cin>>num;

// // (num>0)?
// // cout<<" number is positive ":
// // (num==0)?
// // cout<<"number is zero":
// // cout<<"number is negative";
// // }

// // divisible by 3, 4, 5 but not divisible by 7
// // {
// //     int num;
// //     cout<<"enter number =";
// //     cin>>num;
// //     (num%3==0 && num%4==0 && num%5==0 && num%7!=0)?
// //     cout<<"divisble":
// //     cout<<"not divisible";
// // }

// // A to Z print

// // {
// //     char ch;
// //     cout<<"enter character =";
// //     cin>>ch;
// //     (ch>='A' && ch<='Z')?
// //     cout<<"Valid Character":
// //     cout<<"Not Valid Character";
// // }

// // A to Z & a to z
// // {
// //     char ch;
// //     cout<<"enter character =";
// //     cin>>ch;
// //     ((ch>='A' && ch<='Z')|| (ch>='a' && ch<='z'))?
// //     cout<<"Valid Character":
// //     cout<<"Not Valid Character";
// // }

// // print only #
// // {
// //     char ch;
// //     cout<<"enter character =";
// //     cin>>ch;
// //     (ch=='#')?
// //     cout<<"Valid Character":
// //     cout<<"Not Valid Character";
// // }

// //  print value -10 to -2
// // {
// //     int num;
// //     cout<<"enter number range =";
// //     cin>>num;
// //     (num>=-10 && num<=-2)?
// //     cout<<"Valid Number":
// //     cout<<"Not Valid Number";
// // }


// //pattern password
// {
//     int pass;
//     cout<<"enter Password =";
//     cin>>pass;
//     (pass==1234)?
//     cout<<"Right Password":
//     cout<<"Wrong Password";
// }

// // pattern try again
// {
//     int pass;
//     cout << "Enter Password: ";
//     cin >> pass;

//     (pass == 1234)? 
//     cout << "Unlock": 
//     (cout << "Wrong Password! Try again: ",
//     cin >> pass,
//     (pass == 1234)? 
//     cout << "Unlock" :
//      cout << "Wrong Password! Try again!",
//      cout << "last attempt",
//     cin >> pass,
//     (pass == 1234)? 
//     cout << "Unlock" :
//      cout << " Wrong Password! Your Card Will Be Block"
     
//      );
// }

// // If else Conditions
// // 1.
// #include <iostream>
// using namespace std;

// int main() {
//     int age;
//     cout << "enter your age = ";
//     cin>> age;
//     if (age>60) {
//         cout << "Senior Citizen";
//     }
//     else {
//         cout << "not Senior Citizen";
//     }  
// }

// // 2.
// #include <iostream>
// using namespace std;

// int main() {
//     int a;
//     int b;
//     cout << "enter numbers a & b = ";
//     cin>> a;
//     cin>> b;
//     if (a>b) {
//         cout << "number a is greater";
//     }
//     else {
//         cout << "number b is greater";
//     } 
// }

// // 3
// #include <iostream>
// using namespace std;
// int main() {
//     int per;
//     cout << "enter percentage = ";
//     cin>> per;
//     if (per>50) {
//         cout << "pass";
//     }
//     else {
//         cout << "fail";
//     }
// }

// // 4
// #include <iostream>
// using namespace std;

// int main() {
//     int time;
//     cout << "enter time = ";
//     cin>> time;
//     if (time<=12) {
//         cout << "good morning";
//     }
//     else {
//         cout << "good evening";
//     }
// }

// // 5
// #include <iostream>
// using namespace std;

// int main() {
//     int cp;
//     int sp;
//     cout << "enter cp = ";
//     cin>> cp;
//     cout << "enter Sp = ";
//     cin>> sp;
//     if (cp>sp) {
//         cout << "loss";
//     }
//     else {
//         cout << "profit";
//     }
// }

// // 6.
// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "enter number = ";
//     cin>> num;
//     if (num>0) {
//         cout << "positive";
//     }
//     if (num=0) {
//         cout << "zero";
//     }
//     else {
//         cout << "negative";
//     }
// }

// // 7.
// #include <iostream>
// using namespace std;

// int main() {
//     char ch;
//     cout << "enter character = ";
//     cin>> ch;
//     if (ch=='#') {
//         cout << "valid";
//     }
//     else {
//         cout << "not valid";
//     }
// }

// //8.
// #include <iostream>
// using namespace std;

// int main() {
//     char ch;
//     cout << "enter character = ";
//     cin>> ch;
//     if ((ch>='A' && ch<='Z')|| (ch>='a' && ch<='z'))  {
//         cout << "valid";}
//     else {
//         cout << "not valid";
//     }
// }

// // Mobile Pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int pass;
//     cout << "enter your password = ";
//     cin>> pass;
//     if(pass==1234)
//     {
//         cout<<"open";
//     }
//     else {
//         cout << "wrong password try again";
//         cin >> pass;
//         if(pass==1234)
//         {
//             cout<<"open";
//         }
//         else {
//             cout << "wrong password try again";
//                     cin >> pass;
//         if(pass==1234)
//         {
//             cout<<"open";
//         }
//         else {
//             cout << "wrong password again! ";
//             cout << "your Card Will Be Block";
//         }
//     }
// }
// }

// // press 1 area of square, press 2 for ractangle, 3 for triangle, 4 for circle or invalid input
// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int num;
// //     cout << "enter number  = ";
// //     cin>> num;
// //     if (num==1) {
// //         int side;
// //         cout << "Enter side = ";
// //         cin >> side;
// //         cout<< "Area of Square is = " << (side * side);
// //     }
// //     else if (num==2) {
// //         int height;
// //         int width;
// //         cout << "Enter height = ";
// //         cin >> height;
// //         cout << "Enter width = ";
// //         cin >> width;
// //         cout<< "Area of Rectangle is = " << (height * width);
// //     }
// //     else if (num==3) {
// //         float height;
// //         float breadth;
// //         cout << "Enter height = ";
// //         cin >> height;
// //         cout << "Enter breadth = ";
// //         cin >> breadth;
// //         cout<< "Area of Triangle is = " << (1 * height * breadth)/2;
// //     }
// //     else if (num==4) {
// //         float radius;
// //         cout << "Enter radius = ";
// //         cin >> radius;
// //         cout<< "Area of Circle is = " << (22 * radius * radius)/7;
// //     }
// //     else {
// //         cout << "not a valid number";
// //     }
// // }

// // or  

// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<< "press 1 area of square, press 2 for ractangle, 3 for triangle, 4 for circle";
//     cin>> num;
//     if (num==1) {
//         int side;
//         int area;
//         cout << "Enter side for area of square = ";
//         cin >> side;
//         area = side * side;
//         cout<< area;
//     }
//     else if (num==2) {
//         int height;
//         int width;
//         int area;
//         cout << "Enter height = ";
//         cin >> height;
//         cout << "Enter width = ";
//         cin >> width;
//         area = height * width;
//         cout<< "Area of Rectangle is = " ;
//         cout << area;
//     }
//     else if (num==3) {
//         float height;
//         float breadth;
//         float area;
//         cout << "Enter height = ";
//         cin >> height;
//         cout << "Enter breadth = ";
//         cin >> breadth;
//         area = (1 * height * breadth)/2;
//         cout<< "Area of Triangle is = " ;
//         cout << area;
//     }
//     else if (num==4) {
//         float radius;
//         float area;
//         cout << "Enter radius = ";
//         cin >> radius;
//         area = (22 * radius * radius)/7;

//         cout<< "Area of Circle is = " ;
//     }
//     else {
//         cout << "not a valid number";
//     }
// }

// // numbers range print

// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "enter number  = ";
//     cin>> num;
//     if (num>=10 && num <=20) {
//         cout<< "number is between 10 to 20";
//     }
//     else if (num>=21 && num <=30) {
//         cout<< "number is between 21 to 30";
//     }
//     else if (num>=31 && num <=40) {
//         cout<< "number is between 31 to 40";
//     }
    
//     else {
//         cout << "not a valid number";
//     }
// }

// // Meter Bill Calculation
// #include <iostream>
// using namespace std;

// int main() {
//     int units;
//     int bill;
//     cout<< "enter units = ";
//     cin>> units;
//     cout << " Your Total Bill = ";
//     if (units >=0 && units <=50) {
//         bill = units * 10;
//         cout<< bill ;
//     }
//     else if (units >=51 && units <=100) {
//         bill = 50*10 + (units - 50) * 20;
//         cout<< bill ;
//     }
//     else if (units >=101 && units <=150) {
//         bill = 50*10 + 50*20 + (units - 100) * 30;
//         cout<< bill ;
//     }
//     else if (units >=151 && units <=200) {
//         bill = 50*10 + 50*20 + 50*30 + (units - 150) * 40; 
//         cout<< bill ;
//     }
//     else {
//         cout << "not a valid number";
//     }
// }