#include "vectorReaderFunc.h"

//ACTUAL FUNCTIONS====================================================================
bool mAstro::stringVectDupeCheck(std::vector<std::string>& vect, std::string id)
{
	//std::cout << "stringVectDupeCheck function Called" << std::endl;
	
	int d = vect.size();
	//std::cout << "vector size determined to be " << d << std::endl;
	int i;

	for(i=0; i < d; i++) {
		//std::cout << "for loop successfully started iteration " << i + 1<<std::endl;
		if (vect[i] == id)
		{
			//std::cout << "duplicate found on slot#: " << i << std::endl;
			return true;
		}
		//std::cout << "no duplicate found on slot#" << i << std::endl;
	}
	//std::cout << "for loop ended on iteration " << i << std::endl;
	//std::cout << "dupeCheckRan and returned false" << std::endl;

	return false;
}

bool mAstro::stringVectSelcRngCheck(std::vector<std::string>& vect, int pos)
{
	if (pos> vect.size()-1) {
		std::cout << "Selection out of range, range is inclusively 0 to " << vect.size()-1 << std::endl;
		return false;
	}
	else if (pos < 0) {
		std::cout << "Selection out of range, range is inclusively 0 to " << vect.size() - 1 << std::endl;
		return false;
	}
	std::cout << "Selection in range" << std::endl;
	return true;
	
}

void mAstro::stringVectConsoleDisplay(std::vector<std::string>& vect)
{
	int d = vect.size();
	//std::cout << "vector size determined to be " << d << std::endl;
	int i;

	for (i = 0; i < d; i++) {
		//std::cout << "for loop successfully started iteration " << i + 1<<std::endl;
		std::cout << i << "| " << vect[i] << std::endl;;
	}
}

bool mAstro::removeStringVectEleAtPosition(std::vector<std::string>& v, int pos)
{
	if (mAstro::stringVectSelcRngCheck(v, pos)) {
		std::cout << "removing " << pos << std::endl;
		v.erase(v.begin() + pos);
		return true;
	}
	else {
		return false;
	}
		
}

//TEST FUNCTION VERSIONS==============================================================
//Test function versions share the same name but have a differnt name space
void mAstroTest::test()
{
	std::cout << "This is a test, am I alive?" << std::endl;
}

void mAstroTest::stringVectDupeCheck()
{
		std::vector<std::string> penis = { "Fuck","Shit","Ass" };
		std::cout << "penis vector created" << std::endl;
		std::string searchTerm = "fuck";
		std::cout << "searchTerm created" << std::endl;
		if (mAstro::stringVectDupeCheck(penis, searchTerm)) {
			std::cout << "Duplicate Found for " << searchTerm << std::endl;
		}
		else {
			std::cout << "No Duplicate Found for " << searchTerm << std::endl;
		}
}

void mAstroTest::stringVectDisplay()
{
	std::vector<std::string> penis = { "Fuck","Shit","Ass","Shit2","Shit4"};
	std::cout << "penis vector created" << std::endl;

	std::cout << "displaying Penis for all to see" << std::endl;

	mAstro::stringVectConsoleDisplay(penis);
}

void mAstroTest::removeStringVectEleAtPosition()
{
	std::vector<std::string> penis = { "Fuck","Shit","Ass","Shit2","Shit4" };
	std::cout << "penis vector created" << std::endl;

	std::cout << "displaying Penis for all to see" << std::endl;

	mAstro::stringVectConsoleDisplay(penis);
	int selection;
	std::cout << "Enter item to remove in numeral form" << std::endl;
	std::cin >> selection;
	if (mAstro::removeStringVectEleAtPosition(penis, selection) == true) {
		std::cout << "Item successfully removed" << std::endl;
	}
	else {
		std::cout << "Program shutting down" << std::endl;
	}
	
	std::cout << "Final state of penis" << std::endl;
	mAstro::stringVectConsoleDisplay(penis);
}
