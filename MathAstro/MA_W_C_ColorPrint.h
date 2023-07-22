#pragma once
#include <iostream>
#include<Windows.h>
#include "MAUtilityFunct.h"

class MA_W_C_Color_Print {

private:
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	//DEFAULTS===========================================================
		int defaultPrintColor;
		int defaultBckGrndColor;

	//COMMON_VALES========================================================
		int consoleBackground;
		int highLightColorNumber;
			/*Unless modified, is set to default console Backgrond*/

		int highLightColorNumModifier();
			/*Used to set number for Color system given a background
			number*/
public:
	//CONSTRUCTOR==========================================================
		MA_W_C_Color_Print(int colorScheme = 0){ 
			switch (colorScheme)
			{
			case(1):
				defaultPrintColor = 7;//Default Print is default white (7 = f)
				defaultBckGrndColor = 0;//Default BkGrd is black (0)
				system("color 70");
				consoleBackground, highLightColorNumber = defaultBckGrndColor;
				break;
			default:
				 defaultPrintColor = 15;//Default Print is Bright white (15 = f)
				 defaultBckGrndColor = 8;//Default BkGrd is Gray (8)
				 system("color f8");
				 consoleBackground, highLightColorNumber = defaultBckGrndColor;

			}
			
			
		
		}
	//COMMON_VALUE_TOOLS==================================================
		void setConsoleBackground(int backGroundColor);

		void setHighLight(int highLightNum);

	//PRINT_FUNCTIONS=====================================================
		void printBlack();//0
		void printBlue();//1
		void printGreen();//2
		void printCyan();//3
		void printRed();//4
		void printPurple();//5
		void printYellowDark();//6
		void printDefaultWhite();//7
		void printGray();//8
		void printBrightBlue();//9
		void printBrightGreen();//10
		void printBrightCyan();//11
		void printBrightRed();//12
		void printMagenta();//13
		void printYellow();//14
		void printBrightWhite();//15
			//anything past 15 is a color and a highLight color
	//PRINT_DEFAULT========================================================
		/*Prints the default text color given the active color scheme*/
		void printDefault();
		
	//TEST_FUNCTIONS=======================================================
	void displayAllColors();
};