#include <iostream>

int main() {
    int liczba;

    std::cout << "Podaj liczbę a powiem ci czy jest parzysta: ";
    std::cin >> liczba;

    if (liczba < 0) {
        std::cout << "Liczba jest ujemna" << std::endl;
    } else if (liczba % 2 == 0) {
        std::cout << "Liczba jest parzysta" << std::endl;
    } else {
        std::cout << "Liczba jest nieparzysta" << std::endl;
    }

    return 0;
}