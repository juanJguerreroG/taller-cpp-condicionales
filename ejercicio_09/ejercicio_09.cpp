#include <iostream>
int main() {
    double peso, altura;

    std::cout << "Peso (kg): ";
    std::cin >> peso;
    std::cout << "Altura (m): ";
    std::cin >> altura;

    double imc = peso / (altura * altura);

    if (imc < 18.5){
        std::cout << "Bajo peso";
    }else{ if (imc < 25)
        std::cout << "Normal";
         }else{ if (imc < 30)
        std::cout << "Sobrepeso";
    }else{ if (imc < 35)
        std::cout << "Obesidad I";
    } else{
        std::cout << "Obesidad II";

    return 0;
}
