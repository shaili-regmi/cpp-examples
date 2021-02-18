// Bryn Mawr College, 2021

#include <iostream>  // cout, cin
using namespace std;

class Box
{
public:
   Box(float s)
   {
      mySize = s;
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
   Box box(2.0);
   cout << box.getSize() << endl;
    
   Box* boxPtr = new Box(3.0);
   cout << boxPtr->getSize() << endl;
   delete boxPtr;
}

