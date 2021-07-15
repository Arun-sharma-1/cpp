#include<iostream> 
using namespace std; 
  
class GfG 
{ 
    int i = 0; 
      
    public: 
    GfG() 
    { 
        i = 0; 
        cout << "Inside Constructor\n"; 
    } 
      
    ~GfG() 
    { 
        cout << "Inside Destructor\n"; 
    } 
}; 
  
int main() 
{ 
    int x = 0; 
    if (x==0) 
    {                                       --> without static 
         GfG obj; 
    } 
    cout << "End of main\n"; 
} 
output-->inside constructor inside dest, end of main



#include<iostream> 
using namespace std; 
  
class GfG 
{ 
    int i = 0; 
      
    public: 
    GfG() 
    { 
        i = 0; 
        cout << "Inside Constructor\n"; 
    } 
      
    ~GfG() 
    { 
        cout << "Inside Destructor\n"; 
    } 
}; 
  
int main() 
{ 
    int x = 0; 
    if (x==0) 
    { 
        static GfG obj; 
    } 
    cout << "End of main\n"; 
} 

-->Inside Constructor
End of main
Inside Destructor
