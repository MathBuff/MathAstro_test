#include "MAUtilityFunct.h"

int MAUtility::safeStringToInt(std::string inputString)
{
    return 0;
}

bool MAUtility::stringPositiveNumberCheck(const std::string inputString)
{
        std::string::const_iterator it = inputString.begin();
        while (it != inputString.end() && std::isdigit(*it)) ++it;
            return !inputString.empty() && it == inputString.end();
        return false;
}

bool MAUtility::firstSlotStringHyphonChk(std::string input)
{
    int stringSize = (input.size());
    stringSize = stringSize - 1;

    for (int i = 0; i < stringSize; i++)
    {
        if (input[i] == '-') {
            return true;
        }
    }
    return false;
}

int MAUtility::stringToInt(std::string inputString)
{
    int num = stoi(inputString);

    return num;
}

std::string MAUtility::intToHexString(int your_int)
{
    std::stringstream stream;
    stream << std::hex << your_int;
    std::string result(stream.str());

    return result;
}

char* MAUtility::stringToCstring(std::string your_String)
{
    std::string inputString;

    char* cString = new char[inputString.size() + 1];

    for (int i = 0; inputString.length();i++) {
        cString[i]=inputString[i];
        std::cout << cString[i];
        cString[i] = NULL;

    }
    delete[] cString;
        
    return nullptr;

    
}

void MAUtilityTest::stringPositiveNumberCheck()
{
    std::string input = "12-35";
    if (MAUtility::stringPositiveNumberCheck(input)) {
        std::cout << input << " is a positive integer";
    }
    else {
        std::cout << input << " is not a positve integer ";
    }
}

void MAUtilityTest::stringToInt()
{
    std::string input = " 99.5";
    int crashableInt = MAUtility::stringToInt(input);

    std::cout << "Int seems to have been successfully read as " << crashableInt << std::endl;
    std::cout << "Int -5 is "<< crashableInt - 5;
}

void MAUtilityTest::firstSlotStringHyphonChk()
{
    std::string input="-12341234 -";
    if (MAUtility::firstSlotStringHyphonChk(input))
    {
        std::cout << "Hyphon Detected at slot 0 of string" << std::endl;
    }
    else {
        std::cout << "No Hyphon Detected at slot 0 of string" << std::endl;
    }
}
