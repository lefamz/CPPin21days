/*
 * day10.cpp
 *
 *  Created on: Jul 24, 2014
 *      Author: michal
 */

#include "day10.hpp"

int day10(){

	SimpleCircle circle;

	int r = circle.getRadius();
	cout << r << endl;

	SimpleCircle onePlus;
	onePlus = circle++;

	cout << onePlus.getRadius() << " " << circle.getRadius() << endl;

	onePlus = ++circle;
	cout << onePlus.getRadius() << " " << circle.getRadius() << endl;

	cout << "Day 10 finished" << endl;
	return 0;
}

SimpleCircle::SimpleCircle(){
	itsRadius = new int(5);
}

SimpleCircle::SimpleCircle(int radius){
	itsRadius= new int(radius);
}

SimpleCircle::SimpleCircle(const SimpleCircle & pntr){
	cout << "Cpy constructor in: " << pntr.getRadius() << endl;
	itsRadius = new int(pntr.getRadius());
}

const SimpleCircle SimpleCircle::operator++ (){
	cout << "Prefix called" << endl;
	(*itsRadius)++;
	SimpleCircle tmp(*this);
	return tmp;
}

const SimpleCircle SimpleCircle::operator++ (int){
	cout << "Postfix called" << endl;
	SimpleCircle tmp(*this);
	++(*itsRadius);
	//*itsRadius=*itsRadius+1;
	cout << "Returning from postfix .." << tmp.getRadius() << " " << *itsRadius << endl;
	return tmp;
}

const SimpleCircle SimpleCircle::operator= (const SimpleCircle & src){
	cout << "Assigment operator called: " << src.getRadius() << endl;

	if (this == &src){
		return *this;
	}

	*itsRadius=src.getRadius();
	return *this;

}




