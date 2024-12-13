// print no. 1 to 5 with "for" loop  
#include <iostream>
using namespace std;

int main() { 
    int i;
    for (i=1; i<=5; ++i)
    {
        cout<< i << endl;
    }
    cout << i;
}

// for loop for 2 table print 
#include <iostream>
using namespace std;

int main() { 
    int i=1;

    for (i=1; i<=10; ++i)
    {

        cout<< 2* i << endl;
    }
    
}
 // for loop for 2 table print reverse

#include <iostream>
using namespace std;

int main() { 
    int i=10;

    for (i=10; i>=1; --i)
    {

        cout<< 2* i << endl;

        cout<< 3* i<< endl;
    }
}

// for loop for 2 to 10 table print
#include <iostream>
using namespace std;

int main() { 

    for (int i=2; i<=10; ++i)
    {
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
    for (int i=1; i<=10; ++i)
    {
        sum+=i;
    }          
    cout<< sum << endl;
}
// multiply sum or factorial of numbers 
#include <iostream>
using namespace std;

int main() { 
    int sum =1;
    for (int i=1; i<=5; ++i)
    {
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
    for (int i=1; i<=power; ++i)
    {
        sum*=num;
    }          
    cout<< sum << endl;
}
// ascii value of numbers 
#include <iostream>
using namespace std;

int main() { 
    for (int i=0; i<=256; ++i)
    {
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
// prime number
#include <iostream>
using namespace std;

int main() { 
    int counter = 0;
    int num = 7;
    for (int i=1; i<=num; ++i)
    {
         if(num%i==0)
            {
                counter++;
            }
    }
        if(counter==2)
        {
            cout<<"prime";
        }
        else {
            cout<<"not";
        }      
}

//  reverse print  with for loop
#include <iostream>
using namespace std;

int main() { 
    int num = 123;
    int rb = 0;
    for (; num!=0; num/=10)
    {
        rb = rb*10 + (num%10);
    }   //  or     
    int num = 123;
    int rb = 0;
    for (; num!=0;)
    {
        rb = rb*10 + (num%10);
        num/=10;
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
for(int i=0;i<n;++i)
{
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
for(int i=0;i<n;++i)
{
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
    for(int i=2;i<n;++i)
    {
        term= firstterm+secondterm;
        cout << term << " ";
        firstterm=secondterm;
        secondterm= term;
    }
}
