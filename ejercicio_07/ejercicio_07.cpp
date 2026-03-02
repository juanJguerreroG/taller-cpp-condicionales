#include <iostream>

int main() {
    int anio;
    std::cout << "Ingrese el anio: ";
    std::cin >> anio;

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)){
        std::cout << "Es bisiesto";
    }else{
        std::cout << "No es bisiesto";
    }
    return 0;
}
