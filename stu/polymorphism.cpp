// #include <iostream>
// using namespace std;
// class Number{
//     int num;
//     public:
//     Number(int n=0){
//         num=n;
//     }
//     void operator +(Number &obj){
//     int ans;
//     ans=num+obj.num;
//     cout<<ans;
//     }  
// };

// int main(){
//     Number obj1(5);
//     Number obj2(5);
    
//     obj1+obj2;
//     return 0;
// }
//Abstraction: use the thing without knowing it's background detail to represents data in a hided form is encapsulation.
#include <iostream>
using namespace std;
class Number{
    int num;
    public:
    Number(int n=0){
        num=n;
    }
    void operator +(Number &obj){
    int ans;
    ans=num+obj.num;
    cout<<ans;
    }  
};

int main(){
    Number obj1(5);
    Number obj2(5);
    
    obj1+obj2;
    return 0;
}



#include <iostream>
using namespace std;
class A{
    public:
    virtual void show(){
    cout<<"Class A\n";
    }
};
class B: virtual public A{
    public:
    void show(){
    cout<<"Class B\n";
    }
};
class C: virtual public A{
    public:
    void show(){
    cout<<"Class C\n";
    }
};
class D:public B, public C{
    public:
    void show(){
    cout<<"Class D\n";
    }
};
int main(){
    A *obj;
    C obj3;
    obj=&obj3;
    obj->show();
}