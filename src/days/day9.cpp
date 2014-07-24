#include "./day9.hpp"

CAT & MakeCat(int age);

int day9(){

	//int variable and reference to it
	int var = 0;
	int & rVar = var;

	cout << "Var: "  << var << endl;

	rVar = 121;

	cout << "Var: " << var << endl;

	// constant pointer to constant integer
	int varOne = 111;
	const int * const pVarOne = & varOne;
	int varTwo = 222;

	/* //intenatiaonal error causing - cant change const pointer
 	pVarOne = & varTwo; */

	//stray pointer production:
	int * pStrayPointer;
	// write somewhere in memory
	//*pStrayPointer = 9;

	// fixing:
	pStrayPointer = new int(2);
	*pStrayPointer = 9;

	delete pStrayPointer;
	//delete pVarOne;

	// CAT problem: MakeCat return reference,
	int age = 7;
	CAT Boots = MakeCat(age);

	cout << "Boots is " << Boots.GetAge() << " years old"<< endl;

	// cleaning after
	CAT * pBoots = & Boots;
	delete pBoots;


	return 0;
}

CAT & MakeCat(int age)
{
	CAT * pCat = new CAT(age);
	return *pCat;
}

