#include "MA_W_C_ColorPrint.h"
int MA_W_C_Color_Print::highLightColorNumModifier()
{
	return highLightColorNumber * 16;
}
void MA_W_C_Color_Print::setHighLight(int highLightNum)
{
	highLightColorNumber = highLightNum;
}

void MA_W_C_Color_Print::printBlack()
{
	int a = (0 + highLightColorNumModifier());
	SetConsoleTextAttribute(h, a );
}
void MA_W_C_Color_Print::printBlue()
{
	int a = (1 + highLightColorNumModifier());
	SetConsoleTextAttribute(h, a);
}

void MA_W_C_Color_Print::printGreen()
{
	int a = (2 + highLightColorNumModifier());
	SetConsoleTextAttribute(h, a);
}

void MA_W_C_Color_Print::printCyan()
{
	int a = (3 + highLightColorNumModifier());
	SetConsoleTextAttribute(h,a);
}

void MA_W_C_Color_Print::printRed()
{
	int a = (4 + highLightColorNumModifier());
	SetConsoleTextAttribute(h,a);
}

void MA_W_C_Color_Print::printPurple()
{
	int a = (5 + highLightColorNumModifier());
	SetConsoleTextAttribute(h, a);
}

void MA_W_C_Color_Print::printYellowDark()
{
	int a = (6 + highLightColorNumModifier());
	SetConsoleTextAttribute(h,a);
}

void MA_W_C_Color_Print::printDefaultWhite()
{
	int a = (7 + highLightColorNumModifier());
	SetConsoleTextAttribute(h, a);
}

void MA_W_C_Color_Print::printGray()
{
	int a = (8 + highLightColorNumModifier());
	SetConsoleTextAttribute(h, a);
}

void MA_W_C_Color_Print::printBrightBlue()
{
	int a = (9 + highLightColorNumModifier());
	SetConsoleTextAttribute(h, a);
}

void MA_W_C_Color_Print::printBrightGreen()
{
	int a = (10 + highLightColorNumModifier());
	SetConsoleTextAttribute(h,a);
}

void MA_W_C_Color_Print::printBrightCyan()
{
	int a = (11 + highLightColorNumModifier());
	SetConsoleTextAttribute(h,a);
}

void MA_W_C_Color_Print::printBrightRed()
{
	int a = (12 + highLightColorNumModifier());
	SetConsoleTextAttribute(h,a);
}

void MA_W_C_Color_Print::printMagenta()
{
	int a = (13 + highLightColorNumModifier());
	SetConsoleTextAttribute(h, a);
}

void MA_W_C_Color_Print::printYellow()
{
	int a = (14 + highLightColorNumModifier());
	SetConsoleTextAttribute(h, a);
}

void MA_W_C_Color_Print::printBrightWhite()
{
	int a = (15 + highLightColorNumModifier());
	SetConsoleTextAttribute(h, a);
}

void MA_W_C_Color_Print::displayAllColors()
{
	for (int P = 0; P < 256; P++) {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, P);

		std::cout << "Color: " << P << std::endl;
	}
}

void MA_W_C_Color_Print::setColorScheme(int selection)
{
	switch (selection)
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

void MA_W_C_Color_Print:: printDefault()
{
	int a = (defaultPrintColor + highLightColorNumModifier());
	SetConsoleTextAttribute(h, a);

}
