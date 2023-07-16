#include "vectorReaderFunc.h"

bool mAstro::stringVectDupeCheck(std::vector<std::string>& vect, std::string id)
{
	//1 True, Duplicate Found
	//0 False, no duplicate found

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

//TEST FUNCTION VERSIONS==============================================================
void mAstroTest::test()
{
	std::cout << "This is a test, am I alive?" << std::endl;
}

void mAstroTest::stringVectDupeCheck()
{
		std::vector<std::string> penis = { "fuck","shit","ass" };
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
