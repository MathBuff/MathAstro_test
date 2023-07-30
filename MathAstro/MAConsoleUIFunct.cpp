#include "MAConsoleUIFunct.h"
#include "MA_W_C_ColorPrint.h"
#include"MAKeyReader.h"
#include "MAUtilityFunct.h"
MA_W_C_Color_Print UIColors(1);//Default is the good ol Black

void mAstroCUI::colorSelection()
{
	system("cls");
	UIColors.printBrightRed();
	std::cout << "Select preset colorscheme:"<< std::endl;
	UIColors.printDefault();
	std::cout << "	0| Gray" << std::endl;
	std::cout << "	1| Black" << std::endl;
	std::cout << "	2| Flash Bang" << std::endl;
	std::string input;
	input = mAstroKeys::basicKeyIdentify();
	//if()
	int integerSelected = MAUtility::stringToInt(input);
	//UIColors.setColorScheme(integerSelected);

}

void mAstroCUI::colorPrimer() {
	system("color 8f");
	UIColors.printDefault();
	std::cout << "" << std::endl;
	system("pause");
	system("cls");
}

void mAstroCUI::memeableStartUp()
{
	//BUFFER PRIMER
	/*Without this the background and text get
	mismatched for whatever reason*/

	colorSelection();
	colorPrimer();

	mAstroCUI::mathAstroTitleScreen();
	mAstroCUI::squidWardSecurityPage();
}


void mAstroCUI::squidWardSecurityPage()
{
	//std::cout << "***Welcome to DildoSort V 0.1.5***\n";
	UIColors.printBrightCyan();
	std::cout << "        .--'''''''''--." << std::endl; 
	std::cout << "     .'      .---.      '.   ";
	UIColors.printDefault();
	std::cout << "*******";
	UIColors.printBrightRed();
	std::cout << "Program Disclaimer";
	UIColors.printDefault();
	std::cout << "********" << std::endl;
	UIColors.printBrightCyan();
	std::cout << "    [    .-----------.    ]  "; 
	UIColors.printDefault();
	std::cout << "SquidwardSecurity.exe" << std::endl;
	UIColors.printBrightCyan();
	std::cout << "   [        .-----.        ] "; 
	UIColors.printDefault();
	std::cout << "Is currently running for your" << std::endl;
	UIColors.printBrightCyan();
	std::cout << "   |       .-.   .-.       | "; 
	UIColors.printDefault();
	std::cout << "safety.Please use this program at" << std::endl;
	UIColors.printBrightCyan();
	std::cout << "   |      /   ] /   ]      | "; 
	UIColors.printDefault();
	std::cout << "your own risk." << std::endl;
	UIColors.printBrightCyan();
	std::cout << "    [    | .-. | .-. |    ]  "; 
	UIColors.printDefault();
	std::cout << "If you or a loved one suffers " << std::endl;
	UIColors.printBrightCyan();
	std::cout << "     '-._| | | | | | |_.-'   "; 
	UIColors.printDefault();
	std::cout << "from mesathilioma, you may be " << std::endl;
	UIColors.printBrightCyan();
	std::cout << "         | '-' | '-' |       "; 
	UIColors.printDefault();
	std::cout << "eligible for financial" << std::endl;
	UIColors.printBrightCyan();
	std::cout << "          |___/ |___/        "; 
	UIColors.printDefault();
	std::cout << "compensation." << std::endl;
	UIColors.printBrightCyan();
	std::cout << "       _.-'  |   |  `-._     " << std::endl;
	std::cout << "     .' _.--|     |--._ '.   "; 
	UIColors.printDefault();
	std::cout << "If you experience seizures," << std::endl;
	UIColors.printBrightCyan();
	std::cout << "     ' _...-|     |-..._ '   "; 
	UIColors.printDefault();
	std::cout << "hallucinations, or immense " << std::endl;
	UIColors.printBrightCyan();
	std::cout << "            |     |          "; 
	UIColors.printDefault();
	std::cout << "property damage to materials" << std::endl;
	UIColors.printBrightCyan();
	std::cout << "            '.___.'          "; 
	UIColors.printDefault();
	std::cout << "or ";
	UIColors.printRed();
	std::cout << "organs";
	UIColors.printDefault();
	std::cout << ", SquidwardSecurity" << std::endl;
	std::cout << "                             "; 
	std::cout << "systems cannot be held responsible" << std::endl;
	UIColors.printDefault();
	system("pause");
	system("cls");
	
}

void mAstroCUI::mathAstroTitleScreen()
{	
	system("cls");
	UIColors.printBrightRed();
	std::cout << " ____    ____         _   __ " << std::endl;
	std::cout << "|_   }  /   _|       / |_[  |" << std::endl;
	std::cout << "  |   }/   |   ,--. `| |-'| |--. " << std::endl;
	std::cout << "  | |}  /| |  `'_} : | |  | .-. |" << std::endl;
	std::cout << " _| |_}/_| |_ // | |,| |, | | | |" << std::endl;
	std::cout << "|_____||_____|}'-;__/}__/[___]|__]";
	UIColors.printDefault();
	std::cout<<"                                     _" << std::endl;
	std::cout << "     / }            / |_                                              (_)" << std::endl;
	std::cout << "    / _ }     .--. `| |-'_ .--.   .--.   _ .--.   .--.   _ .--..--.   __   .---.   .--.   _ .--. " << std::endl;
	std::cout << "   / ___ }   ( (`}] | | [ `/'`}]/ .'`} }[ `.-. |/ .'`} }[ `.-. .-. | [  | / /'`}]/ .'`} }[ `.-. | " << std::endl;
	std::cout << " _/ /   } }_  `'.'. | |, | |    | }__. | | | | || }__. | | | | | | |  | | | }__. | }__. | | | | | " << std::endl;
	std::cout << "|____| |____|[}__) )}__/[___]    '.__.' [___||__]'.__.' [___||__||__][___]'.___.' '.__.' [___||__]" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cin;
	UIColors.printDefault();
	system("pause");
	system("cls");
}

void mAstroCUI::mainMenuDisplay()
{
	std::cout << "---------------------------------------------\n";
	std::cout << "  MainMenu\n";
	std::cout << "       ";
	std::cout << "A - Add dildos" << std::endl;
	std::cout << "       ";
	std::cout << "R - Remove Dildos" << std::endl;
	std::cout << "       ";
	std::cout << "SD - Sort Dildo Database" << std::endl;
	std::cout << "       ";
	std::cout << "P - Print Dildo Database" << std::endl;
	std::cout << "       ";
	std::cout << "S - Save changes to dildo Database" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "---------------------------------------------\n";
}
