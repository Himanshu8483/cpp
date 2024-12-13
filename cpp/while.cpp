// While Loop
// print no. 1 to 5
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

// 2 table print
#include <iostream>
using namespace std;
int main() { 
    int number=1;
    while(number<=10){
        cout<< 2* number << endl;
        ++number;
    }
}

//  reverse print 
#include <iostream>
using namespace std;
int main() { 
    int num = 123;
    int rb = 0;
    while (num != 0) {
        rb = rb*10 + (num%10);
        num = num / 10;
    }
    cout <<rb;
}

// fibonaci Series
#include <iostream>
using namespace std;
int main() {
    int n = 10;  
    int firstterm=0;
    int secondterm = 1;
    int term;
    int i = 0;
    while (i<n) {
        if(i==0){
            cout<<firstterm<< " ";
            i++;
            continue;
        }
        if(i==1){
            cout<<secondterm<< " ";
            i++;
            continue;
        }
        term= firstterm+secondterm;
        cout << term << " ";
        firstterm=secondterm;
        secondterm= term;
        i++; 
    }
}

// amstrong no. 
#include <iostream>
using namespace std;
int main() { 
    int num = 153;
    int ans = num;
    int rb = 0;
    int sum = 0;
    while (num!=0) {
        rb = (num%10);
        sum += rb* rb * rb;
        num/=10;
    }
    cout << sum << endl;
    if ( sum == ans) {
        cout<< "yes";
    }
    else {
        cout<< "no";
    }
}