#include <iostream>

int main()
{
    double celsius;
    
    std::cout<<"Ingresa temperatura";
    std::cin>>celsius;
    
    double f = (celsius*9/5)+32;
    double k = celsius+273.15;
    double r= (celsius+273.15)*9/5;
    
    std::cout<<"Fahrenheit: "<< f << ", Kelvin: "<< k << " y Rankine " << r;
    
    
    return 0;
}
