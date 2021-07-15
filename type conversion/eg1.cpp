#include<bits/stdc++.h>
using namespace std;
class computer{
  	public:
             int model;
             int price;
             computer(int m, int p){
             	 model=m;
             	 price=p;
              }	
             
        	 void show(){
         	cout<<model<<"  "<<price<<endl;
         	}	
};
class mobile{
   	public:
             int mod;
             int pri;
    
             
             mobile(computer c){
             	mod=c.model*5;
	pri=c.price*0.5;
	
      void display(){
      	cout<<mod<<"  "<<pri;
      }
  }
};
int main(){
	int computer c1(123, 30000);
	c1.show();
	mobile m1=c1;
	m1.display();

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
