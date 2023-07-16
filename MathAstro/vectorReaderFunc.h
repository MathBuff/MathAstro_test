#include <vector>
#include <iostream>
#ifndef _VECTOR_READER_FUNC_H_
#define _VECTOR_READER_FUNC_H_
namespace mAstro{
	bool stringVectDupeCheck(std::vector<std::string>& vect, std::string id);

}

//TESTS FOR VECTOR READER FUNCTIONS

namespace mAstroTest {
	void test();
	void stringVectDupeCheck();
}


#endif
