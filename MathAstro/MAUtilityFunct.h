#pragma once
#include <sstream>
#include <iostream>

namespace MAUtility {
	int safeStringToInt(std::string inputString);
		/*takes a string, and returns its value as an integer
		*	String to int Properties
		*	If letters are infront of numbers, returns zero.
		*/

	bool stringPositiveNumberCheck(const std::string inputString);//Tested!
		/*Takes in a string and checks if there are only numbers*/

	bool firstSlotStringHyphonChk(std::string input);
		/*Checks if the first slot of a string is a hyphon, useful for 
		checking for negative signs*/

	int stringToInt(std::string inputString);//Tested!
		/*Takes in a string of a number
		*	If a float, its fraction is wiped.
		*	If a integer, runs as expected, (even negatives)
		*	Any letters in front of the first valid number results
		*	in system crash
		*/

	std::string intToHexString(int your_int);//Tested!

	char* stringToCstring(std::string your_String);//Not currently Functional

}

namespace MAUtilityTest {
	void stringPositiveNumberCheck();
	void stringToInt();
	void firstSlotStringHyphonChk();
}