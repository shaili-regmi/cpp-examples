// Bryn Mawr College, 2021

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
   string filename = "../files/grades.txt";

   ifstream file(filename);
   if (!file) // true if the file is valid
   {
      cout << "Cannot load file: " << filename << endl;
      return 1;
   }

   int num = 0;
   float sum = 0;
   while (file)
   {
      int grade;
      file >> grade;
      sum += grade;
      num++;
   }

   cout << "The average is " << sum/num << endl;
   file.close();
   return 0;
}

