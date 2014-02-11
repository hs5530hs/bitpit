/*
 * octree.hpp
 *
 *  Created on: Feb 10, 2014
 *      Author: Edoardo Lombardi
 */

#ifndef OCTREE_HPP_
#define OCTREE_HPP_

// =================================================================================== //
// INCLUDES                                                                            //
// =================================================================================== //
#include <stdint.h>

// =================================================================================== //
// NAME SPACES                                                                         //
// =================================================================================== //
using namespace std;


// =================================================================================== //
// CLASS DEFINITION                                                                    //
// =================================================================================== //

class Class_Octant{

	// Members ======================================================================= //
private:
	int32_t x, y, z;
	int8_t level;
	int8_t marker;


	// Constructors ------------------------------------------------------------------ //
public:
	Class_Octant();
	Class_Octant(const int8_t lev);

	// Methods ------------------------------------------------------------------ //
	int getlevel();						// Give level of octant






};//end Class_Octant;



#endif /* OCTREE_HPP_ */
