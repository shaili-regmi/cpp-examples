// Bryn Mawr College, 2021


#include <iostream>  // cout, cin
#include <string>    // string class
using namespace std;

struct Point
{
   float x;
   float y;
};

int main(int argc, char** argv)
{
   Point p;
   p.x = 1.0f;
   p.y = 2.0f;
   cout << p.x << " " << p.y << endl;

   Point a{-3.0f, 2.0f};
   cout << a.x << " " << a.y << endl;
   
}

