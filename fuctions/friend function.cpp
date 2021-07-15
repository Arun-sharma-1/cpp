#include<bits/stdc++.h>
using namespace std;
class sum{
	int a;
	int b;
	public:
  void setdata(int x, int y){
  	a=x;
  	b=y;
   
  }
   void showdata(){
   	cout<<a<<" "<<b;
   }
   friend void calculate(sum);
   
};
void calculate(sum s1)
{  
  cout<<s1.a+s1.b; 
	
}
int main(){
	sum s1;
	s1.setdata(1,2);
	s1.showdata();
	cout<<endl;
	calculate(s1);
//	s1.showdata();
}
