// Bryn Mawr College, 2021
#ifndef BOX_H_
#define BOX_H_

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

#endif
/*
// Bryn Mawr College, 2021
#pragma once

class Box
{
public:
	Box();
	Box(float s);
	float getSize();

protected:
	float mySize = 1.0f;
};
*/