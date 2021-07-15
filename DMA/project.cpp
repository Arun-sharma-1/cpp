/*program to create an array of five student CLASS.
you can store sttributes of your interest in student
class. Use dynamic way of memory allocation to
objects*/
#include<bits/stdc++.h>
using namespace std;
class student{
private:
 	string name[5];
  	int regno[5];
	public:
		
	void enter_data(){
		cout<<"enter the names of student "<<endl;
		for(int i=0; i<4; i++)
		cin>>name[i];
		cout<<"enter the regno students "<<endl;
		for(int i=0; i<4; i++)
		cin>>regno[i];
	}
		
	int show_data(){
		for(int i=0; i<4; i++){
	
	 cout<<name[i]<<endl;
	 cout<<regno[i]<<endl;
	}	 	
} 
 
 
};
int main(){
	student *s1=new student[5];
	s1->enter_data();
	s1->show_data();
	delete[] s1;
	
	
}
