/*
 * day10.hpp
 *
 *  Created on: Jul 24, 2014
 *      Author: michal
 */

#ifndef DAY10_HPP_
#define DAY10_HPP_

#include <iostream>
using namespace std;

int day10();

class SimpleCircle{
private:
	int * itsRadius;
public:
	SimpleCircle();
	SimpleCircle(int radius);
	SimpleCircle(SimpleCircle *);

	~SimpleCircle(){
		cout << "Circle destructor .." << endl;
		delete itsRadius;
	}

	int & getRadius() const{
		return *itsRadius;
	}

	void setRadius(int radius){
		*itsRadius=radius;
	}

	const SimpleCircle operator++ ();
	const SimpleCircle operator++ (int);


};


#endif /* DAY10_HPP_ */
