#include "MAWinConsTxtCol.h"

#include <windows.h> 

HANDLE h;

void MA_Color::white()
{
	SetConsoleTextAttribute(h, 13);
}

void MA_Color::commonMidGreen()
{
	return;
}

void MA_Color::commonMidBlue()
{
	return;
}

void MA_Color::commonMidRed()
{
	return;
}

void MA_Color::commonMidYellow()
{
	return;
}

void MA_Color::commonMidOrange()
{
	return;
}
