 
#include <iostream> 
using namespace std; 

// base class 
class Vehicle { 
public: 
	Vehicle() 
	{ 
	cout << "This is a Vehicle" << endl; 
	} 
}; 

// sub class derived from two base classes 
class Car: public Vehicle{ 

}; 

// main function 
int main() 
{ 
	// creating object of sub class will 
	// invoke the constructor of base classes 
	Car obj; 
	return 0; 
} 
//-->capability of class to derive properties and charaterstics form another class is inheritance
// the above example is single inheritance,multiple inheritance is also possible
// C++ program to explain 
// multiple inheritance 
#include <iostream> 
using namespace std; 

// first base class 
class Vehicle { 
public: 
	Vehicle() 
	{ 
	cout << "This is a Vehicle" << endl; 
	} 
}; 

// second base class 
class FourWheeler { 
public: 
	FourWheeler() 
	{ 
	cout << "This is a 4 wheeler Vehicle" << endl; 
	} 
}; 

// sub class derived from two base classes 
class Car: public Vehicle, public FourWheeler { 

}; 

// main function 
int main() 
{ 
	// creating object of sub class will 
	// invoke the constructor of base classes 
	Car obj; 
	return 0; 
} 

