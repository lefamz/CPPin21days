#include "day08.hpp"

using namespace std;

Employee::Employee(USHORT age, USHORT years, USHORT salary){
	this->itsAge=age;
	this->itsYearsOfService=years;
	this->itsSalary=salary;
}

Employee::~Employee(){
	cout << "Destructor called" << endl;
}

USHORT Employee::getItsAge() const{
	return this->itsAge;
}

USHORT Employee::getItsSalary() const{
	return this->itsSalary;
}

USHORT Employee::getItsYearsOfService() const{
	return this->itsYearsOfService;
}

void Employee::setItsAge(USHORT age){
	this->itsAge=age;
}

void Employee::setItsSalary(USHORT salary){
	this->itsSalary=salary;
}

void Employee::setItsYearsOfService(USHORT years){
	this->itsYearsOfService=years;
}

USHORT Employee::getPayment() const{
	return itsSalary/(itsYearsOfService*12);
}

int mainTridy(){
	Employee emp1 = Employee(36,5,158000);

	cout << emp1.getItsYearsOfService() << endl;
	cout << emp1.getItsSalary() << endl;
	cout << emp1.getPayment() << endl;

	return 0;
}
