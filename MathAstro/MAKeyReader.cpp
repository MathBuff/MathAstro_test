#include "MAKeyReader.h"
#include <conio.h>
int mAstroKeys::keyInReturn()
{
    bool loop = true;
    while (loop) {
        int ch = _getch();
        if (ch == 224) {
            ch = _getch();
            switch (ch) {
            case 72: std::cout << "up\n";    break;
            case 80: std::cout << "down\n";  break;
            case 77: std::cout << "right\n"; break;
            case 75: std::cout << "left\n";  break;
            default: std::cout << "idk\n";
            }
        }
        else {
            std::cout << char(ch) << '\n';
            if (char(ch) == 'q')
                loop = false;
        }
    }
    return 0;
}
