// Chapter 10 of C++ How to Program
// driver for vehicle
#include <iostream>

using std::cout;
using std::endl;

#include <vector>

using std::vector;

#include "vehicle.h"
#include "taxi.h"
#include "truck.h"
#include "parkinglot.h"

int main()
{
   Taxi *cab1=new Taxi( 3.0 );
   Truck *mack1=new Truck( 7.0 );
   Taxi *cab2=new Taxi( 3.1 );
   Truck *mack2=new Truck( 7.1 );
   Taxi *cab3=new Taxi( 3.2 );
   Truck *mack3=new Truck( 7.2 );
   Taxi *cab4=new Taxi( 3.3 );
   Truck *mack4=new Truck( 7.3 );
   Taxi *cab5=new Taxi( 3.4 );
   Truck *mack5=new Truck( 7.4 );

   /* Write code to indicate that truck is carrying cargo */
   mack1->setCargo(true);
   /* Declare a vector, parkingLot, of base-class pointers */
   ParkingLot pl;

   pl.addVehicle(cab1);
   pl.addVehicle(mack1);
   pl.addVehicle(cab2);
   pl.addVehicle(mack2);
   pl.addVehicle(cab3);
   pl.addVehicle(mack3);
   pl.addVehicle(cab4);
   pl.addVehicle(mack4);
   pl.addVehicle(cab5);
   pl.addVehicle(mack5);

   cout << "\nThe vehicles cannot get out of their parking spaces because of "
        << "traffic,\nso they respond: \n";

   /* Write code to call member function horn */
   pl.printVehicles();


   return 0;

} // end main



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
