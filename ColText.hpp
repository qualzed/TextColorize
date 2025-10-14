#include <iostream>
#include <termcolor.hpp>
#include <ctime>
#include <string>

#define RED     termcolor::red
#define GREEN     termcolor::green
#define BLUE     termcolor::blue
#define YELLOW     termcolor::yellow
#define CYAN     termcolor::cyan
#define MAGENTA     termcolor::magenta
#define RESET     termcolor::reset

using namespace std;

void RES() { cout << RESET; }

void ColText(char* input) {
    for(int i = 0; i < strlen(input); i++) {
        srand(time(0) + i);
        int color = rand() % 6;
        switch(color) {
            case 0:
                cout << RED << input[i];
                break;
            case 1:
                cout << GREEN << input[i];
                break;
            case 2:
                cout << BLUE << input[i];
                break;
            case 3:
                cout << YELLOW << input[i];
                break;
            case 4:
                cout << CYAN << input[i];
                break;
            case 5:
                cout << MAGENTA << input[i];
                break;
        }
    }
    RES();
}