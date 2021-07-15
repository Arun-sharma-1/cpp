#include<iostream>
using namespace std;
//function overloading 
// we can create a function and we can use this fuction in calclating different things
int area(int,int);
int area(int);
int main(){
	// area of circle
	 int radius,l,b;
	cout<<"enter radius";
	cin>>radius;
	area(radius);
	cout<<"enter length and breadth ";
	cin>>l>>b;
	area(l,b);
	
}
int area(int r){
	int A=3.14*r*r;
	cout<<"Area of circle is "<< A<<endl;
}
int area(int len ,int bre){
   int B=len*bre;
   cout<<"Area of rectangle is "<<B<<endl;
}
