//============================================================================
// Name        : PlayFiled.cpp
// Author      : Michal Zajacik
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Main.hpp"

int main() {
	int result = 0;
	std::cout << "day 9: " << std::endl;
	result += day9();
	std::cout << std::endl << "day 10: " << std::endl << std::endl;
	result += day10();
	std::cout << std::endl << "day 11: " << std::endl << std::endl;
	result += day11();

	return result;
}

