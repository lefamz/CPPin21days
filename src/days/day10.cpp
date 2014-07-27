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

	SimpleCircle onePlus = circle++;

	cout << onePlus.getRadius() << " " << circle.getRadius() << endl;

	onePlus = 0;
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

SimpleCircle::SimpleCircle(SimpleCircle * pntr){
	cout << "Cpy constructor in: " << pntr->getRadius() << endl;
	itsRadius = new int(pntr->getRadius());
}

const SimpleCircle SimpleCircle::operator++ (){
	cout << "Prefix called" << endl;
	(*itsRadius)++;
	SimpleCircle tmp(this);
	return tmp;
}

const SimpleCircle SimpleCircle::operator++ (int){
	cout << "Postfix called" << endl;
	SimpleCircle tmp(this);
	//++(*itsRadius);
	*itsRadius=*itsRadius+1;
	return tmp;
}




