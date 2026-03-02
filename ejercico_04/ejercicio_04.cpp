#include <iostream>

int main()
{
    
    double n1;
    double n2;
    double r;
    char op;
    
    std::cout<<"ingresa el primer numero";
    std::cin>>n1;
    std::cout<<"ingresa el segundo numero";
    std::cin>>n2;
    std::cout<<"ingresa el operador";
    std::cin>>op;
    
    if (op=='+'){
        r=n1+n2;
    } else if (op=='-'){
        r=n1-n2;
    } else if (op=='*'){
        r=n1*n2;
    } else if (op=='/'){
        r=n1/n2;
    } else {
        
        std::cout<<"Operador no valido";
    }
    
    std::cout<<"El resultado es: "<<r;

    return 0;
}
