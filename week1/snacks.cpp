// Bryn Mawr College, 2021
// Write a program which reads `snacks.txt` and initializes an array of struct Snack

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

// TODO: Define struct Snack
struct Snack
{
    string name;
    int quantity;
    int price;
    string description;
};

int main(int argc, char** argv)
{
   string filename = "../files/snacks.txt";

   // TODO: Your code here
   ifstream file(filename);
   if (!file) // true if the file is valid
   {
       cout << "Cannot load file: " << filename << endl;
       return 1;
   }

   int num = 0;
   file >> num;
   Snack* snacks = new Snack[num];

   for (int i = 0; i < num; i++)
   {
       file >> snacks[i].name >> snacks[i].quantity >> snacks[i].price >> snacks[i].description;
   }
   file.close();

   for (int i = 0; i < num; i++)
   {
       cout << snacks[i].name << " " << snacks[i].quantity << " " << snacks[i].price << " " << snacks[i].description << endl;
   }

   delete[] snacks;
   return 0;
}