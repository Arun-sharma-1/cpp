#include<bits/stdc++.h>
using namespace std;
class A{
	private:
	int a;
	protected:
 	
        int getdata(int k);
};
int A::getdata(int k){
		a=k;
		cout<<a;
	}
class B:private A{
 public:
  int setdata(int x){
  	 getdata(x);
  }	
 	
};
class C:public B{
	
};
int main(){
	C obj;
//	obj.getdata(4);  getadata is protected
obj.setdata(4);
	
}
