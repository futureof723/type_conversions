#include <iostream>

int main() {
    std::cout << "Simple program to demonstrate safe type conversions\n" << std::endl;

    constexpr unsigned char c = 'x';
    std::cout << "Char variable c is equal to: " << c << std::endl;
    constexpr int x = c;
    std::cout << "Integer variable x = c: " << x << std::endl;
    constexpr int y = 'x';
    std::cout << "Integer variable y = 'x': " << y << std::endl;
    constexpr char c2 = x;
    std::cout << "Char variable c2 = x: " << c2 << std::endl;

    std::cout << "\nAll this works because the letter x in binary is equal to the binary integer value 120" << std::endl;
    std::cout << "Essentially all information is preserved and not lost.\n" << std::endl;

    std::cout << "In c++ the following conversions are safe:" << std::endl;
    std::cout << "1) bool to char" << std::endl;
    std::cout << "2) bool to int" << std::endl;
    std::cout << "3) bool to double" << std::endl;
    std::cout << "4) char to int" << std::endl;
    std::cout << "5) int to double" << std::endl;

    std::cout << "\nThe most useful conversion is int to double because it allows us to mix ints and doubles in expressions." << std::endl;

    std::cout << "\nOne example of an unsafe conversion.\n" << std::endl;
    constexpr int a = 20000;
    std::cout << "int variable a is = 20000." << std::endl;
    char cc = a;
    std::cout << "Char variable cc is equal to a: " << cc << std::endl;

    if (a != cc)
        std::cout << "oops!: " << a << " != " << cc << std::endl;


    std::cout << "Try for yourself." << std::endl;
    std::string yes = "y";

    while (yes == "y") {
        char character;
        std::cout << "Enter an character: " << std::endl;
        std::cin >> character;
        int integer = character;
        std::cout << "Integer is " << integer << std::endl;
        std::string answer;
        std::cout << "Would you like to convert to another character to integer?" << std::endl;
        std::cin >> answer;
        if (character != 'y') {
            yes = answer;
        }
    }

    std::cout << "Type conversions to avoid: " << std::endl;
    std::cout << "1) double to int" << std::endl;
    std::cout << "2) double to char" << std::endl;
    std::cout << "3) double to bool" << std::endl;
    std::cout << "4) int to char" << std::endl;
    std::cout << "5) int to bool" << std::endl;
    std::cout << "6) char to bool" << std::endl;

    return 0;
}
