#include <iostream>
#include "vectorReaderFunc.h"

namespace mAstroTest {

void stringVectDupeCheck() {
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
}
	