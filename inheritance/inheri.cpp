#include <iostream>
using namespace std;
class sample{
    public:
    void fun1(){
        cout<<"hi" <<endl;
    }
    void fun2(){
        cout<<"by"<<endl;
    }
};
class newsample:public sample{
    public:
    void fun2(){
        cout<<"GM"<<endl;
    }
    void fun3(){
        cout<<"ARUN"<<endl;
    }
     void fun4(){
         sample::fun2();
        cout<<"tRUN"<<endl;
    }
};
int main() {
   
   newsample n;
   n.fun1();
   n.fun2();
   n.fun3();
   n.fun4();
   n.sample::fun2();
   
   
}
