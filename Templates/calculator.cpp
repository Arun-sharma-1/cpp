#include<iostream>
using namespace std;
template<class TYPE>
class calculator{
	
  public:
  	TYPE X,Y;

   calculator(TYPE X, TYPE Y)
   {
               this->X=X;
	this->Y=Y;
	// this pointer is very important without this it will give garbage value 
   }
   
   ~calculator(){
   	cout<<"destructor called "<<endl;
   	
   }
  TYPE add(){
   	return X+Y;
   }
   
    TYPE sub(){
        return X-Y;
    }

   TYPE mul();

};
template <class T>
T calculator<T>:: mul(){
        return X*Y;
    }


int main(){
    calculator <double>  c(10,20.2);   
    // this double is important we have to write this in place of double we can also write int ,float
    
    cout<<c.add()<<endl;
    cout<<c.sub()<<endl;
    cout<<c.mul()<<endl;
    cout<<"my name is Arun sharma"<<endl;
}
