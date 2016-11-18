// Chapter 9 of C++ How to Program
// truck.h

#ifndef RACECAR_H
#define RACECAR_H
#include "vehicle.h"

// class Racecar definition
/* Write class header for Truck, which inherits publicly
   from Vehicle */ 
class Truck:public Vehicle{
public:
   Truck(double);

   bool hasCargo() const;
   void setCargo(bool);

private:

   bool cargo;

}; // end class Racecar

#endif // RACECAR_H



/**************************************************************************
 * (C) Copyright 1992-2003 by Deitel & Associates, Inc. and Prentice      *
 * Hall. All Rights Reserved.                                             *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
