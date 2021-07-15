#include <iostream>
using namespace std;

int main() {
  int a=5;
  int *p;
  p=&a;
  cout<<p<<" "<< *p <<" "<<&p<<endl;
  int &b=a;
  a=a+2;
  cout<<b;
	return 0;
}  
