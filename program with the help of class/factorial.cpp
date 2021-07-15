#include<iostream>
using namespace std;
// factorial
class number{
	private:
		// f=1 then this will show warning....declare this in function factorial(void)
		int n,f;
		public:
		void get_data();
		int factorial();
};
void number::get_data(){
	cout<<"enter the value of n ";
	cin>>n;
	
}
int number::factorial()
{
  f=1;
	for(int i=1; i<=n; i++)
	 f=f*i;
	cout<<f<<endl;
}
int main(){
	number num;
	num.get_data();
	num.factorial();
}

