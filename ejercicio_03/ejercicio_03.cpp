#include <iostream>

int main()
{
    
    int LEER = 0b001;
    int ESCRIBIR = 0b010;
    int EJECUTAR = 0b100;
    
    int permisos;
    
    std::cout<<"Ingresa valor de permisos (0-7): ";
    std::cin>>permisos;
    
    if (permisos & LEER) {
        std::cout<<"Tiene permisos de LEER\n";
    } else if (permisos & ESCRIBIR) {
        std::cout<<"Tiene permisos de ESCRIBIR\n";
    } else if (permisos & EJECUTAR){
        std::cout<<"Tienes permisos de EJECUTAR\n";
    }

    return 0;
}
