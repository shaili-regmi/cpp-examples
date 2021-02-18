// Bryn Mawr College, 2021


#include <iostream>  // cout, cin
using namespace std;

int main(int argc, char** argv)
{
   float* values2 = new float[5]; // dynamic allocation -> needs a delete[] later
   for (int i = 0; i < 5; i++) // for loop
   {
      values2[i] = i; 
   }

   float values1[] = {2.0f, 3.0f, 5.0f}; // on the stack -> automatically deleted
   for (int i : values1) // for-each semantics loop
   {
      cout << i << " ";
   }
   cout << endl;

   float values[2]; // declared on the stack but not assigned any values
   values[0] = 1.0f;
   values[1] = 2.0f;

   delete[] values2;
}

