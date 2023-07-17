#include "MAKeyReader.h"
#include <conio.h>
#include <Windows.h>
//===============================================
//delete is 22483 x
//insert is 22482 x
//home is 22471 x
//end is 22479 x
//page down 22481 x
//page up is 22473 x
std::string mAstroKeys::basicKeyIdentify() {
    bool loop = true;
    while (loop) {
        int ch = _getch();
        if (ch == 224) {
            ch = _getch();
            switch (ch) {
            case 71:
                return "home";
                break;

            case 72:
                return "up";
                break;
            case 73:
                return "pageup";
                break;

            case 75:
                return "left";
                break;

            case 77:
                return "right";
                break;
            case 79:
                return "end";
                break;

            case 80:
                return "down";
                break;
            case 81:
                return "pagedown";
                break;

            case 82:
                return "insert";
                break;

            case 83:
                return "delete";
                break;

            default:
                return "unlinkedButton";
            }
        }
        else {
            if (mAstroKeys::ctrlCheck()) {
                return "unlinkedButton";
            }
            std::string s(1, char(ch));
            return s;
        }
    }
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

std::string mAstroKeys::shiftKeyInput()
{
    std::string output = "x";
   output =  mAstroKeys::basicKeyIdentify();
   if (output == "unlinkedButton") {
       return "unlinkedButton";
   }
   if (mAstroKeys::shiftCheck()) {
       output = "shift+" + output ;
   }

   return output;
}

void mAstroKeys::keyInt2ByteConsOutputer()
{
     int input;
     input = _getch();
     std::cout << input;
     input = _getch();
     std::cout << input;
}

