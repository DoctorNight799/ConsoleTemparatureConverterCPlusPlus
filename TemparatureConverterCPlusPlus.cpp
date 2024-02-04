#include <iostream>
#include <conio.h>

int main()
{
    char userInput = 'y';
    while (userInput != 'x') {
        std::cout << "Choose an option: \na.Conver farengate to celsius. \nb.Convert celsius to farengate.\nc.Convert celsius to kelvin \
        \nd.Convert farengate to kelvin.\ne.Convert kelvin to celsius.\nf.Convert kelvin to farengate.\n";
        char option = _getch();
        double temp = 0;
        double res = 0;
        switch (option) {
        case 'a':
            std::cout << "Write down a temrature in farengate to convert: ";
            std::cin >> temp;
            res = 5.0 / 9.0 * (temp - 32);
            std::cout << "Temprature in celsius is " << res << std::endl;
            break;
        case 'b':
            std::cout << "Write down a temrature in celsius to convert: ";
            std::cin >> temp;
            res = 9.0 / 5.0 * temp + 32;
            std::cout << "Temprature in farengate is " << res << std::endl;
            break;
        case 'c':
            std::cout << "Write down a temrature in celsius to convert: ";
            std::cin >> temp;
            res = temp + 273.15;
            std::cout << "Temprature in kelvin is " << res << std::endl;
            break;
        case 'd':
            std::cout << "Write down a temrature in farengate to convert: ";
            std::cin >> temp;
            res = (temp + 459.67) * 5.0 / 9.0;
            std::cout << "Temprature in kelvin is " << res << std::endl;
            break;
        case 'e':
            std::cout << "Write down a temrature in kelvin to convert: ";
            std::cin >> temp;
            res = temp - 273.15;
            std::cout << "Temprature in celsius is " << res << std::endl;
            break;
        case 'f':
            std::cout << "Write down a temrature in kelvin to convert: ";
            std::cin >> temp;
            res = temp * 9.0 / 5.0 - 459.67;
            std::cout << "Temprature in farengate is " << res << std::endl;
            break;
        default:
            std::cout << "Wrong option, try again." << std::endl;
            break;
        }
        std::cout << "Would you like to convert temprature again?\nWrite smth to continue, or 'x' to exit." << std::endl;
        userInput = _getch();
    }
}