#include <vector>
#include <iostream>
#ifndef _VECTOR_READER_FUNC_H_
#define _VECTOR_READER_FUNC_H_
//VECTOR READER FUNCTIONS======================================================
namespace mAstro{
	bool stringVectDupeCheck(std::vector<std::string>& vect, std::string id);
		//True, duplicate found
		//false, no duplicate found

	bool stringVectSelcRngCheck(std::vector<std::string>& vect, int pos);
		//1, selection is in range of vector
		//0, selection is not in range of vector

	void stringVectConsoleDisplay(std::vector<std::string>& vect);

	bool removeStringVectEleAtPosition(std::vector<std::string>& v, int pos);
		//1, selection in range and item removed
		//0, selection out of range
}

//TESTS FOR VECTOR READER FUNCTIONS=============================================
namespace mAstroTest{
	void test();
	void stringVectDupeCheck();
	void stringVectDisplay();
	void removeStringVectEleAtPosition();
}


#endif
