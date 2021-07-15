#include<bits/stdc++.h>
// exception in inheritance 
using namespace std;
class Base{
};
class Derived: public Base{
};

int main(){
            Derived d;
            try{
            	throw d;
            }
             catch(Derived d){
            	cout<<"caught Derived Exception ";
            } 
            	 
            catch(Base b){
            	cout<<"caught base Exception "<<endl;
            }
   // if we declare base b than derived d then compiler give warning
}
