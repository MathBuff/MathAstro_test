#include "MAConsoleUIFunct.h"
#include "MA_W_C_ColorPrint.h"
MA_W_C_Color_Print UIColors;
void mAstroCUI::memeableStartUp()
{
	mAstroCUI::mathAstroTitleScreen();
	mAstroCUI::squidWardSecurityPage();
}


void mAstroCUI::squidWardSecurityPage()
{
	//std::cout << "***Welcome to DildoSort V 0.1.5***\n";
	UIColors.printBrightCyan();
	std::cout << "        .--'''''''''--." << std::endl; 
	std::cout << "     .'      .---.      '.   ";
	UIColors.printDefaultWhite();
	std::cout << "*******";
	UIColors.printBrightRed();
	std::cout << "Program Disclaimer";
	UIColors.printDefaultWhite();
	std::cout << "********" << std::endl;
	UIColors.printBrightCyan();
	std::cout << "    [    .-----------.    ]  "; 
	UIColors.printDefaultWhite();
	std::cout << "SquidwardSecurity.exe" << std::endl;
	UIColors.printBrightCyan();
	std::cout << "   [        .-----.        ] "; 
	UIColors.printDefaultWhite();
	std::cout << "Is currently running for your" << std::endl;
	UIColors.printBrightCyan();
	std::cout << "   |       .-.   .-.       | "; 
	UIColors.printDefaultWhite();
	std::cout << "safety.Please use this program at" << std::endl;
	UIColors.printBrightCyan();
	std::cout << "   |      /   ] /   ]      | "; 
	UIColors.printDefaultWhite();
	std::cout << "your own risk." << std::endl;
	UIColors.printBrightCyan();
	std::cout << "    [    | .-. | .-. |    ]  "; 
	UIColors.printDefaultWhite();
	std::cout << "If you or a loved one suffers " << std::endl;
	UIColors.printBrightCyan();
	std::cout << "     '-._| | | | | | |_.-'   "; 
	UIColors.printDefaultWhite();
	std::cout << "from mesathilioma, you may be " << std::endl;
	UIColors.printBrightCyan();
	std::cout << "         | '-' | '-' |       "; 
	UIColors.printDefaultWhite();
	std::cout << "eligible for financial" << std::endl;
	UIColors.printBrightCyan();
	std::cout << "          |___/ |___/        "; 
	UIColors.printDefaultWhite();
	std::cout << "compensation." << std::endl;
	UIColors.printBrightCyan();
	std::cout << "       _.-'  |   |  `-._     " << std::endl;
	std::cout << "     .' _.--|     |--._ '.   "; 
	UIColors.printDefaultWhite();
	std::cout << "If you experience seizures," << std::endl;
	UIColors.printBrightCyan();
	std::cout << "     ' _...-|     |-..._ '   "; 
	UIColors.printDefaultWhite();
	std::cout << "hallucinations, or immense " << std::endl;
	UIColors.printBrightCyan();
	std::cout << "            |     |          "; 
	UIColors.printDefaultWhite();
	std::cout << "property damage to materials" << std::endl;
	UIColors.printBrightCyan();
	std::cout << "            '.___.'          "; 
	UIColors.printDefaultWhite();
	std::cout << "or ";
	UIColors.printRed();
	std::cout << "organs";
	UIColors.printDefaultWhite();
	std::cout << ", SquidwardSecurity" << std::endl;
	std::cout << "                             "; 
	std::cout << "systems cannot be held responsible" << std::endl;
	UIColors.printDefaultWhite();
	system("pause");
	system("cls");
	
}

void mAstroCUI::mathAstroTitleScreen()
{	

	UIColors.printBrightRed();
	std::cout << " ____    ____         _   __ " << std::endl;
	std::cout << "|_   }  /   _|       / |_[  |" << std::endl;
	std::cout << "  |   }/   |   ,--. `| |-'| |--. " << std::endl;
	std::cout << "  | |}  /| |  `'_} : | |  | .-. |" << std::endl;
	std::cout << " _| |_}/_| |_ // | |,| |, | | | |" << std::endl;
	std::cout << "|_____||_____|}'-;__/}__/[___]|__]";
	UIColors.printDefaultWhite();
	std::cout<<"                                     _" << std::endl;
	std::cout << "     / }            / |_                                              (_)" << std::endl;
	std::cout << "    / _ }     .--. `| |-'_ .--.   .--.   _ .--.   .--.   _ .--..--.   __   .---.   .--.   _ .--. " << std::endl;
	std::cout << "   / ___ }   ( (`}] | | [ `/'`}]/ .'`} }[ `.-. |/ .'`} }[ `.-. .-. | [  | / /'`}]/ .'`} }[ `.-. | " << std::endl;
	std::cout << " _/ /   } }_  `'.'. | |, | |    | }__. | | | | || }__. | | | | | | |  | | | }__. | }__. | | | | | " << std::endl;
	std::cout << "|____| |____|[}__) )}__/[___]    '.__.' [___||__]'.__.' [___||__||__][___]'.___.' '.__.' [___||__]" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cin;
	UIColors.printDefaultWhite();
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
