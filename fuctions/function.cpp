#include<iostream>
	using namespace std;
	int sum(int &a,int &b);
	int sum1(int *a, int *b);
int main(){
  int a,b;
	cout<<"enter the value of and b";
	cin>>a>>b;

cout<<sum(a,b)<<endl;
   int c=sum1(&a,&b);
   cout<<c;
}
int sum1(int *a, int *b){
	{
	return(*a+*b);
	}
}
int sum(int &a,int &b)
{
	return(a+b);
}
