#include<bits/stdc++.h>
using namespace std;
class B; // we have to declare it because when it reach to line 10 then fun(A,B) .... in this B is not declared yet 
class A{
	int a;
	friend void fun(A,B);
	public:
		 
	void setdata(int x){
	    a=x;
	}
//	 friend void fun(A,B);  --> it can be private or public coz this is not a member function of class
};
 class B{
 	private:
 	int b;
 	public:
 		void setdata(int x){
	    b=x;
	}
 	friend void fun(A,B);
 };
 void fun(A o1, B o2)
 {
 	cout<<"sum is  "<<o1.a+o2.b;
 }
int main(){
	A o1;
	B o2;
	o1.setdata(2);
	o2.setdata(4);
	fun(o1,o2);
}
