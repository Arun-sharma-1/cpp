#include<bits/stdc++.h>
 using namespace std;
 struct data
 {
 	int i;
 	float f;
 };
 class emp
 {
 	public:
 	void fun1(data x)
 	{
 		x.i=2;
 		x.f=32.3;
	 }
	 void fun2(data* y)
	 {
	 y->i=3;
	 y->f=34.2;	 
	 }
	 void fun3(data &z)
	 {
	 	z.i=3;
	 	z.f=33.2;
	 	
	 }
 };
 
 int main(){
 	data d={1,2.2};
 	emp e;
 	e.fun1(d);
 	cout<<d.i<<",  "<<d.f<<endl;
 	e.fun2(&d);
 	cout<<d.i<<" "<<d.f<<endl;
 	e.fun3(d);
 	cout<<d.i<<" "<<d.f<<endl;
 }
