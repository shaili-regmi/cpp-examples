// Bryn Mawr College, 2021


#include <iostream>  // cout, cin
using namespace std;

int main(int argc, char** argv)
{
   cout << "Do you like jokes? (Y/N) ";
   string response;
   cin >> response;

   cout << endl;
   if (response == "Y")
   {
      cout << "Cool. Me too.\n";
   } 
   else if (response == "N")
   {
      cout << "Yeah, me neither\n";
   }
   else
   {
      cout << "What are you talking about?\n";
   }   
}

