// Chapter 10 of C++ How to Program
// taxi.cpp
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
#include "vehicle.h"
#include "parkinglot.h"

// ParkingLot constructor
ParkingLot::ParkingLot()
{
   vector< Vehicle * > vehicles;

} // end class ParkingLot constructor
ParkingLot::~ParkingLot(){}
// function addVehicle definition
void ParkingLot::addVehicle( Vehicle *v ) 
{
   vehicles.push_back(v);
} // end function addVehicle

// function getVehicleCount definition
int ParkingLot::getVehicleCount() const 
{
   return vehicles.size();

} // end function getVehicleCount

// function printVehicles definition
void ParkingLot::printVehicles() const
{
	
	for(int i=0; i<vehicles.size(); i++){
		vehicles[i]->horn();
		vehicles[i]->print();	
	}

} // end function printVehicles




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

