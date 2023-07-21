#include <iostream>
#include <vector>
#include <stdlib.h>
#include"vectorReaderFunc.h"
#include "MAConsoleUIFunct.h"
#include "MAKeyReader.h"

//--
#include <Windows.h>
#include "MA_W_C_ColorPrint.h"
#include "MAUtilityFunct.h"

int main() { 
	MA_W_C_Color_Print screenBufferColor;
	//int b = 15;
	//std::cout<< MAUtility::intToHexString(b)<<std::endl;
	std::string input = "I fucking Love blacks";
	char* dynamic_C_String = MAUtility::stringToCstring(input);
	char shit[1];
	shit[0] = dynamic_C_String[4];
	std::cout<< shit[0];//should be c

}