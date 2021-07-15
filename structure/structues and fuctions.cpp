#include<iostream>
#include<string.h>
using namespace std;
//structure and fuctions 
struct student
{   char name[23],fav_colour[23];
	int age, rank, roll_no, marks;
	// function
 void input(){
		cout<<"enter all information regarding student ";
		cin>>name>>fav_colour;
		cin>>age>>rank>>roll_no>>marks;
	}
	
	void output()
	{
		cout<<"name"<<"fav_colour";
		cout<<"age"<<"rank"<<"roll-no"<<"marks";
	}
};
int main(){
  student info;
  info.input();
  info.output();
  	
}
