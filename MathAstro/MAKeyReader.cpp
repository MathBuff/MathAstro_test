#include "MAKeyReader.h"
#include <conio.h>
#include <Windows.h>
std::string mAstroKeys::basicKeyIdentify(){
    bool loop = true;
    while (loop) {
        int ch = _getch();
        if (ch == 224) {
            ch = _getch();
            switch (ch) {
            case 72: 
                return "up";
                    break;
            case 80: 
                return "down";  
                    break;
            case 77: 
                return "right"; 
                    break;
            case 75: 
                return "left";  
                    break;
            default: 
                return "unlinkedButton";
            }
        }
        else {
            std::string s(1, char(ch)) ;
            return s;
        }
    }
    return 0;
}

bool mAstroKeys::shiftCheck()
{
    if (GetKeyState(VK_SHIFT) & 0x8000)
    {
        return true;
    }
    else {
        return false;

    }
}

bool mAstroKeys::ctrlCheck()
{
        if (GetKeyState(VK_CONTROL) & 0x8000)
        {
            return true;
        }
        else {
            return false;

        }
}

std::string mAstroKeys::ctrlShiftKeyInput()
{
    std::string output = "x";
   output =  mAstroKeys::basicKeyIdentify();
   if (mAstroKeys::shiftCheck()) {
       output = output + "+shift";
   }
   if (mAstroKeys::ctrlCheck()) {
       output = output + "+ctrl";
   }

   return output;
}

