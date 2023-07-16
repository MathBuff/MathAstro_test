#include <vector>
#include <iostream>
#ifndef _VECTOR_READER_STRUCT_H_
#define _VECTOR_READER_STRUCT_H_

struct vectRead {
	bool stringVectDupeCheck(std::vector<std::string>& vect, std::string id) {
		//1 True, Duplicate Found
		//0 False, no duplicate found
		int d = vect.size();

		for (int i=0; i++; i > d) {
			if (vect[i] == id)
			{
				std::cout << "duplicate found on slot#: "<< i << std::endl;
				return 1;
			}
			std::cout << "no duplicate found on slot#" << i << std::endl;
		}

	}

};
#endif
