#include<bits/stdc++.h>
using namespace std;

int main() {
	 vector<string>arr={"january","feb","mar","april","may","june","july"};
	 vector<string>::iterator months=arr.begin();
	  vector<string>::iterator month=arr.begin();
	 
	 cout<<"current month--> "<<*months<<endl; // january
	 advance(months,3); // april
	  cout<<"current month--> "<<*months<<endl;
	   advance(months,-1); // mar
	  cout<<"current month--> "<<*months<<endl;
	  cout<<"the distance between months is "<<distance(month,months)<<endl;
	
	 vector<string>::iterator M1=next(months, 1); 
	 vector<string>::iterator M2=prev(months,distance(month,months));
	 
	 cout<<"months is at "<<*months<<endl;
	 cout<<"M1 is at "<<*M1<<endl;
	 cout<<"M2 is at "<<*M2<<endl;
	return 0;
}
