/*
 * day9.hpp
 *
 *  Created on: Jul 24, 2014
 *      Author: michal
 */

#ifndef DAY9_HPP_
#define DAY9_HPP_

#include <iostream>

using namespace std;

int day9();

class CAT{
	public:
		CAT(int age) { itsAge = age; }
		~CAT(){cout << "destructor call .. " << endl;}
		int GetAge() const { return itsAge;}

	private:
		int itsAge;
};



#endif /* DAY9_HPP_ */
