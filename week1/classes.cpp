// Bryn Mawr College, 2021

#include <iostream>  // cout, cin
using namespace std;

class Box
{
public:

   Box(): mySize(1.0f) // default constructor
   {
   }
   
   Box(float s)
   {
      mySize = s;
   }

   ~Box() //destructor
   {
       cout << "Called on delete\n";
   }

   float getSize() 
   {
      return mySize;
   }

protected:
   float mySize = 1.0f;
};

int main(int argc, char** argv)
{
    Box box1; //calls default constructor (created stack)

    Box box(2.0); // created on the stack
   cout << box.getSize() << endl;
    
   Box* boxPtr = new Box(3.0); // dynamically allocated
   cout << boxPtr->getSize() << endl;
   delete boxPtr;
}

