#ifndef __INTERSECTION_H__
#define __INTERSECTION_H__

#include "Section.h"
#include "Vehicle.h"
#include <string>

using namespace std;

class Intersection : public Section{
	
	private:
		Section *right;
	
	
	public:
		
		Intersection() {};
		~Intersection() {};
		
		void setRight(Section *right);
		
};

#endif