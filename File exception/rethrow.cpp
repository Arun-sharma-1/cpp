#include<iostream>
using namespace std;
int main(){
	try
   {
		try
		{
			throw 4;
		}
	
	catch(int  n){
		cout<<"inner catch";
		throw;
	}
}
	catch(double n)
	{
		cout<<"outer catch";
	}
  	
}
