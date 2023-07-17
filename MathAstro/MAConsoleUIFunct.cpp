#include "MAConsoleUIFunct.h"

void mAstroCUI::memeableStartUp()
{
	mAstroCUI::mathAstroTitleScreen();
	mAstroCUI::squidWardSecurityPage();
}

void mAstroCUI::squidWardSecurityPage()
{
	//std::cout << "***Welcome to DildoSort V 0.1.5***\n";
	std::cout
		<< "        .--'''''''''--." << std::endl
		<< "     .'      .---.      '.   *******Program Disclaimer********" << std::endl
		<< "    [    .-----------.    ]  SquidwardSecurity.exe" << std::endl
		<< "   [        .-----.        ] Is currently running for your" << std::endl
		<< "   |       .-.   .-.       | safety.Please use this program at" << std::endl
		<< "   |      /   ] /   ]      | your own risk." << std::endl
		<< "    [    | .-. | .-. |    ]  If you or a loved one suffers " << std::endl
		<< "     '-._| | | | | | |_.-'   from mesathilioma, you may be " << std::endl
		<< "         | '-' | '-' |       eligible for financial" << std::endl
		<< "          |___/ |___/        compensation." << std::endl
		<< "       _.-'  |   |  `-._     " << std::endl
		<< "     .' _.--|     |--._ '.   If you experience seizures," << std::endl
		<< "     ' _...-|     |-..._ '   hallucinations, or immense " << std::endl
		<< "            |     |          property damage to materials" << std::endl
		<< "            '.___.'          or organs, SquidwardSecurity" << std::endl
		<< "                             systems cannot be held responsible" << std::endl;
	system("pause");
	system("cls");
}

void mAstroCUI::mathAstroTitleScreen()
{
	std::cout << " ____    ____         _   __ " << std::endl;
	std::cout << "|_   }  /   _|       / |_[  |" << std::endl;
	std::cout << "  |   }/   |   ,--. `| |-'| |--. " << std::endl;
	std::cout << "  | |}  /| |  `'_} : | |  | .-. |" << std::endl;
	std::cout << " _| |_}/_| |_ // | |,| |, | | | |" << std::endl;
	std::cout << "|_____||_____|}'-;__/}__/[___]|__]                                     _" << std::endl;
	std::cout << "     / }            / |_                                              (_)" << std::endl;
	std::cout << "    / _ }     .--. `| |-'_ .--.   .--.   _ .--.   .--.   _ .--..--.   __   .---.   .--.   _ .--. " << std::endl;
	std::cout << "   / ___ }   ( (`}] | | [ `/'`}]/ .'`} }[ `.-. |/ .'`} }[ `.-. .-. | [  | / /'`}]/ .'`} }[ `.-. | " << std::endl;
	std::cout << " _/ /   } }_  `'.'. | |, | |    | }__. | | | | || }__. | | | | | | |  | | | }__. | }__. | | | | | " << std::endl;
	std::cout << "|____| |____|[}__) )}__/[___]    '.__.' [___||__]'.__.' [___||__||__][___]'.___.' '.__.' [___||__]" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cin;
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
