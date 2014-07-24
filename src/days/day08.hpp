# include <iostream>

typedef unsigned int USHORT;

int mainTridy();

class Employee{
private:
	USHORT itsAge, itsYearsOfService,itsSalary;
public:
	USHORT getItsAge() const;
	USHORT getItsYearsOfService() const;
	USHORT getItsSalary() const;
	USHORT getPayment() const;
	void setItsAge(USHORT age);
	void setItsYearsOfService(USHORT years);
	void setItsSalary(USHORT salary);
	Employee(USHORT age, USHORT years, USHORT salary);
	~Employee();
};
