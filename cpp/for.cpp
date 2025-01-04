//  print no. 1 to 5
//  do while loop 
#include <iostream>
using namespace std;
int main() { 
    int number=1;
    do{
        cout<< number << endl;
        ++number;
    }
    while(number<=5);
}

// While Loop
#include <iostream>
using namespace std;
int main() { 
    int i = 1;
    while(i<=5){
        cout<< i << endl;
        ++i;
    }
    cout << i;
}

// For Loop
#include <iostream>
using namespace std;
int main() { 
    int i;
    for (i=1; i<=5; ++i){
        cout<< i << endl;
    }
    cout << i;
}

// 3 table print 
#include <iostream>
using namespace std;
int main() { 
    int num=3;
    for (int i=1; i<=10; ++i){
        cout<< num* i << endl;
    }   
}

// 2 table print reverse
#include <iostream>
using namespace std;
int main() { 
    int i=10;
    for (i=10; i>=1; --i){
        cout<< 2* i << endl;
        cout<< 3* i<< endl;
    }
}

// 2 to 10 table print
#include <iostream>
using namespace std;
int main() { 
    for (int i=2; i<=10; ++i) {
        for (int j = 1; j <=10; ++j){
            cout<<i*j;
        }      
        cout<< "\t"; // for some space
    }
}

// sum of numbers 
#include <iostream>
using namespace std;
int main() { 
    int sum =0;
    for (int i=1; i<=10; ++i) {
        sum+=i;
    }          
    cout<< sum << endl;
}

// multiply sum or factorial of numbers 
#include <iostream>
using namespace std;
int main() { 
    int sum =1;
    for (int i=1; i<=5; ++i) {
        sum*=i;
    }          
    cout<< sum << endl;
}

// power calculate of numbers 
#include <iostream>
using namespace std;
int main() { 
    int sum =1;
    int power = 3;
    int num =2;
    for (int i=1; i<=power; ++i) {
        sum*=num;
    }          
    cout<< sum << endl;
}

// ascii value of numbers 
#include <iostream>
using namespace std;
int main() { 
    for (int i=0; i<=256; ++i) {
        cout<< "ascii value of " << i<< "= " << char(i) << endl;
    }          
}

// factor of numbers 
#include <iostream>
using namespace std;

int main() { 
    int factor = 6;
    for (int i=1; i<=factor; ++i)
    {
         if(factor%i==0){
            cout<< i << endl;
        } 
    }         
}

// prime no
#include <iostream>
using namespace std;
int main() {
    int num = 13;
    if(num<2) {
        cout << "Not a prime no";
        return 0;
    }
    for(int i=2; i*i<=num; i++) {
        if(num%i==0) {
            cout<< "Not a prime no";
            return 0;
        }
    }
    cout<< "Prime Number" ;
    return 0;
}

// prime number
#include <iostream>
using namespace std;

int main() { 
    int counter = 0;
    int num = 7;
    for (int i=1; i<=num; ++i) {
        if(num%i==0){
                counter++;
        }
    }
    if(counter==2) {
        cout<<"prime";
        }
    else {
        cout<<"not";
    }      
}

//  reverse print
#include <iostream>
using namespace std;
int main() { 
    int num = 123;
    int rb = 0;
    for (; num!=0; num/=10) {
        rb = rb*10 + (num%10);
    }      
    cout<< rb << endl;
}

// pelindrom means opposite = num 
#include <iostream>
using namespace std;
int main() {  
    int num = 121;
    int num1 = num;
    int rb = 0;
    for (; num!=0;){
        rb = rb*10 + (num%10);
        num/=10; 
    }  
    if(num1==rb)   {
        cout << "pelindrome";
    }  
    else {
        cout << "not";
    }
    // cout<< rb << endl;
}

// n term series 
#include <iostream>
using namespace std;
int main() {
    int n = 5; 
    int rb = 1;
    for (int i = 1; i <= n; i++) {
        cout << rb << endl;
        rb = rb * 10 + 1;
    }
}

// ap series term
#include <iostream>
using namespace std;
int main() {
    int n=5;
    int d=2;
    int a=1;
    int term=0;
    for(int i=0;i<n;++i) {
        term=a+i*d; // term = a+(n-1)*d
        cout<<term << " ";
    }
}

// sum of ap series 
#include <iostream>
using namespace std;
int main() {
    int n=5;
    int d=2;
    int a=1;
    int term=0;
    int sum = 0;
    for(int i=0;i<n;++i) {
        term=a+i*d;
        sum= sum+term;
    }
    cout<< sum;
}

//  fibonaci series
#include <iostream>
using namespace std;
int main() {
    int n = 10;  
    int firstterm=0;
    int secondterm = 1;
    int term = 0;
    cout << firstterm << " ";
    cout << secondterm << " ";
    for(int i=2;i<n;++i) {
        term= firstterm+secondterm;
        cout << term << " ";
        firstterm=secondterm;
        secondterm= term;
    }
}

//  minimum notes print
#include <iostream>
using namespace std;
int main() { 
    int rs = 500;
    if (rs>=500) {
        cout << "500 notes = " << rs/500;
    }
    else {
        cout << "wrong input";
    }
}
//  minimum notes print
#include <iostream>
using namespace std;
int main() { 
    int rs = 1786;
    if ( rs>=500) {
        cout << "500 notes = " << rs/500 << endl;
        rs=rs%500;
    }
    if ( rs>=200) {
        cout << "200 notes = " << rs/200 << endl;
        rs=rs%200;
    }
    if ( rs>=100) {
        cout << "100 notes = " << rs/100 << endl;
        rs=rs%100;
    }
    if ( rs>=50) {
        cout << "50 notes = " << rs/50 << endl;
        rs=rs%50;
    }
    if ( rs>=20) {
        cout << "20 notes = " << rs/20 << endl;
        rs=rs%20;
    }
    if ( rs>=10) {
        cout << "10 notes = " << rs/10 << endl;
        rs=rs%10;
    }
    if ( rs>=5) {
        cout << "5 notes = " << rs/5 << endl;
        rs=rs%5;
    }
    if ( rs>=2) {
        cout << "2 notes = " << rs/2 << endl;
        rs=rs%2;
    }
    if ( rs>=1) {
        cout << "1 notes =" << rs/1 << endl;
        rs=rs%1;
    }
    else {
        cout << "wrong input ";
    }
}

// M.C.Q OF SERVICE BASED COMPANY:
#include<iostream>
using namespace std;

// Q.1 In C++, 0 (or NULL) is treated as false in conditional expressions.
int main() {
	if(NULL)
		cout<<"NULL";
	else
		cout<<"FALSE";
	return 0;
}
// Q.2
 int main(){
	int i = 0, j = 0;
		if(--i== j++)
			cout<< i--<<","<< j--;
		else
			cout<<i<<j;
		return 0;
}
// Q.3
int main(){
	int i = 0, j = 1, k = 0;
		if(++k, i, j++)
			cout<<i<<j<<k;

	return 0;
}
// Q.4
int main(){
	int i;
		if(true)
			cout<<"This will work";
		else
			cout<<"This will not work";
	return 0;
}
// Q.5 
int main() {
	char str[9] = "if block";
	if(str == "if block")
		cout<<"if block executed";
	else
		cout<<"else block executed";
	return 0;
}
// Q.6 
int main() {
	char str[] = "\0";
	if("welcome")
		cout<<"inside if block";
	else
		cout<<"inside else block";
	return 0;
}
// Q.7
int main() {
	if("0")
		cout<<"inside if block";
	else
		cout<<"inside else block";
	return 0;
}
// Q.8
int main() {
	if(0 ==NULL)
		cout<<"inside if block";
	else
		cout<<"inside else block";
	return 0;
}
// Q.9
int main() {
int i = 5, j = 4;
	if(!(""))
		cout<<i<<j;
	else
		cout<<i++<< ++j;
	return 0;
}
// Q.10
int main() {
	int i = 1, j = 0 ;
	if(i-- == j)
		cout<< --i;
	else
		cout<< ++j;
	return 0;
}
// Q.11
int main() {
	int i = 5, j = 5;
	if(i == j)
		cout<<"Equal";
	else 
		cout<<"Not Equal";
	return 0;
}
// Q.12
int main(){
	float me = 5.25;
	double you = 5.25;
	if(me == you) // exception data type
		cout<<"matched";
	else
	return 0;
}
// Q.13
int main() {
	int  i = 25;
	if(i == 25);
		i = 50;
	if(i == 25)
		i = i + 1;
	else
		i = i + 1;
	cout<<i;
	return 0;
}
// Q.14
int main(){
	if("May I Get in")
		cout<<"yes, Get in";
	else
		cout<<"No";
}
// Q.15
int main() {
	int i = 5, j = 6, k = 0;
	if(i > j == k)
		cout<< i++<<++j<< --k;
	else
		cout<< i<< j<< k;
}
// Q.16
int main() {
	int i = 2;
	if(i == (1, 2))
		cout<<"Hi";
	else
		cout<<"bye";
	return 0;
}
// Q.17
int main(){
	int i = 5;
    if(i == 3, 4)
     	cout<<"Hi";
    else
		cout<<"Bye";
}
// Q.18
int main()
{
int i = 5;
  if(i = i - 5 > 4)
	  cout<<"inside if block";
  else
	  cout<<"inside else block";
}
// Q.19
int main()
{
	if(sizeof(0))
		cout<<"Hi";
	else
		cout<<"Bye";
}
// Q.20
int main()
{
	if(sizeof('\0'))
		cout<<"inside if block";
	else
		cout<<"inside else block";
	return 0;
}

// amstrong no. 
#include <iostream>
using namespace std;
int main() { 
    int num = 153;
    int ans = num;
    int rb = 0;
    int sum = 0;
    for (; num!=0; num/=10){
        rb = (num%10);
        sum += rb* rb * rb;
    }
    cout << sum << endl;
    if ( sum == ans) {
        cout<< "yes";
    }
    else {
        cout<< "no";
    }
}

// febonaci Series
#include <iostream>
using namespace std;
int main() {
    int n = 10;  
    int firstterm=0;
    int secondterm = 1;
    int term;
    for(int i=0;i<n;++i) {
        if(i==0){
            cout<<firstterm<< " ";
            continue;
        }
        if(i==1){
            cout<<secondterm<< " ";
            continue;
        }
        term= firstterm+secondterm;
        cout << term << " ";
        firstterm=secondterm;
        secondterm= term;
    }
}

// perfect numbers find (nums factor addition will be = num)
#include <iostream>
using namespace std;
int main() { 
    int num = 6;
    int sum = 0;
    for (int i=1; i<num; ++i) {
         if(num%i==0){
            sum=sum+i;
        } 
    }     
    if(sum==num){
        cout<<"perfect";
    }
    else {
        cout<<"no perfect";
    }
}

// lcm hcf 
#include <iostream>
using namespace std;
int main() { 
    int sn=3;
    int ln=6;
    int hcf;
    int lcm;
    for(int i=1 ; i<=sn; ++i){
        if(sn%i==0 && ln%i==0)
        hcf=i;
    }
    // cout << hcf;
    lcm=(sn*ln)/hcf;
    cout<<lcm;
}

// lcm without formula
#include <iostream>
using namespace std;
int main() { 
    int sn=3;
    int ln=7;
    int lcm;
    for(int i=ln;; i=i+ln){
        if(i%sn==0 && i%ln==0){
        lcm=i;
        break;
        }
    }
    cout<<lcm;  
}

// gp series term
#include <iostream>
using namespace std;
int main() {
int n=5;
int a=1;
int r=3;
for(int i=0;i<n;++i) {
    cout<<a<<"  ";
        a*=r; 
    }
}

// number in letter 
#include <iostream> 
using namespace std;
int main() { 
    int dig = 0;
    int num = 1234;  // Initial number
    int rb = 0;  // Variable to store the reversed number
    for (; num != 0; num /= 10) {
        rb = rb * 10 + (num % 10);  // Reverse the number
    }
    for (; rb!=0; rb=rb/10) {   
        dig=rb%10;          // Extract the last digit
        switch(dig){
            case 1 : 
            cout<< "one " ;
            break;
            case 2 : 
            cout<< "two " ;
            break;
            case 3 : 
            cout<< "three " ;
            break;
            case 4 : 
            cout<< "four " ;
            break;
            default: cout << "wrong Input";
            break;
        }
    }
}