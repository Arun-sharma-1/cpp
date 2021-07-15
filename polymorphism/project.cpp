#include<bits/stdc++.h>
using namespace std;
class Shape{
	protected:
	int length=7;
	int width=4;
	public:
   virtual void  print_area()=0;
   
};
class rectangle:public Shape{
    public:
   void print_area(){
   	
       cout<<length*width;
   }

};
int main(){
	rectangle *r=new rectangle();
	r->print_area();
}
