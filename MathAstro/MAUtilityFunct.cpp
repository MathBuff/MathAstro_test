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
    std::string input;
    char* g = new char[input.size() + 1];
    std::copy(begin(input), end(input), g);
    g[input.size()] = '\0';
    //std::cout << "Your string is now a pointer to a c string of size: " << input.size();
    return g;
}
