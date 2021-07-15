        // find reverse of a number
#include<iostream>
using namespace std;
class number{
	private:
 
 int n,rev=0,y;
	public:
	void get_data(void);
	int reverse(void);	
};
void number::get_data(void){
  cout<<"enter the no that u want to reverse ";
  cin>>n;
}
int number::reverse(void){
//	int rev=0;
	while(n){
  y=n%10;
  rev=rev*10+y;
  n/=10;
}
  cout<<rev;
}

 int main(){
 	number num;
 	num.get_data();
 	num.reverse();
 	
 }
