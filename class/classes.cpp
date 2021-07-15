#include<iostream>
using namespace std;
void input(int x , int y);
 
/* the difference betwen class and structure is that in class by default all memebers are private but in 
   structure all members by default are public
   */
// classes
 class complex
 {
// 	private:
 	int a,b;
 	public:
 	void input(int x , int y)
	 {
   a=x,b=y;
} 
 void show(){
 
    cout<<a<<" "<<b;
}
// void input(int ,int); // declaration must be inside structure
};
/*
 void complex:: input(int x, int y){
	a=x,b=y;
	cout<<a<<b;
}*/
int main(){
	complex c1;
	c1.input(3,4);
	c1.show();
 	
}
