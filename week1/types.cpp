// Bryn Mawr College, 2021


#include <iostream>  // cout, cin
#include <string>    // string class
#include <cmath>     // sqrt, cos, acos, log, etc
#include <limits>    // useful constants
using namespace std;

int main(int argc, char** argv)
{
   int a = 0;
   string greeting = "hi";
   greeting += "?";
   float test = 3.14f;
   bool isCold = false;
   cout << greeting << endl;

   float fraction = 1/3.0f; // DANGER ZONE
   cout << fraction << endl;

   // C++ defines useful constants in <limits>
   float inf = numeric_limits<float>::infinity(); 

   // Numerical issues are common in graphics
   // watch out for NaNs and floating point exceptions
   float badVal1 = acos(-2); // acos has valid range [-1,1]
   cout << badVal1 << endl;

   float badVal2 = sqrt(-2); // sqrt has valid range [0,Inf]
   cout << badVal2 << endl;

   float badVal3 = 10/a; // watch out!
   cout << badVal3 << endl;
   
   
}

