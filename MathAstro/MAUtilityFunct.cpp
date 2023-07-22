#include "MAUtilityFunct.h"

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
