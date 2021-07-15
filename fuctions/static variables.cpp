 // C++ program to demonstrate static 
// variables inside a class 

 /*#include<iostream> 
using namespace std; 

class GfG 
{ 
public: 
	static int i; 
	
	GfG() 
	{ 
		// Do nothing 
	}; 
}; 

int main() 
{ 
GfG obj1; 
GfG obj2; 
obj1.i =2; 
obj2.i = 3; 
	
// prints value of i 
cout << obj1.i<<" "<<obj2.i; 
} 
       -->   Even if the function is called multiple times, space for the static variable is allocated only once 
              and the value of variable in the previous call gets carried through the next function call 
              
   */           

// C++ program to demonstrate static 
// variables inside a class 
  
#include<iostream> 
using namespace std; 
  
class GfG 
{ 
public: 
    static int i; 
      
    GfG() 
    { 
        // Do nothing 
    }
}; 
  
int GfG::i = 1; 
  
int main() 
{ 
    GfG obj; 
    // prints value of i 
    cout << obj.i;  
} 

Static member functions can access static data members only. Static member functions can be overloaded. 
Static data members can be accessed by non-static member functions.
 Static function can be called without using objects
 : In C++, all the constant variables must be initialized while declaration and they cannot be modified later
  in the program
