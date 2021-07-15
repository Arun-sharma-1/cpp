#include<bits/stdc++.h>
using namespace std;
 class base{
      public:
      void print(){
           cout<<"print base class "<<endl;
           
      }
      void show(){
           cout<<"show base class "<<endl;
      }
 };
 class derived:public base{
      public:
      void print(){
           cout<<"print derived class "<<endl;
           
      }
      void show(){
           cout<<"show derived class "<<endl;
      }
 };
int main(){
    base *p;
    derived d;
    p=&d;
    p->print();
    p->show();
}
