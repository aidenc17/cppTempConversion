#include <iostream>

int main() {

    double temp;
    char unit;

    std::cout << "************** Temperature Conversion ****************\n";

    std::cout << "F = Farenheit \n";
    std::cout << "C = Celcius \n";
    std::cout << "What would you like to convert to? ";

    std::cin >> unit;

    if ( unit == 'F' || unit == 'f' ) {
        std::cout << "Enter temperature in Celcius: ";
        std::cin >> temp;

        temp = (temp * 1.8) + 32;
        std::cout << "Temperature is: " << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c' ) {
        std::cout << "Enter temperature in Farenheit: ";
        std::cin >> temp;
        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp << "C\n";
    }
    else {
        std::cout << "Please only input C or F\n";
    }

    std::cout << "*******************************************************";


    return 0;
}