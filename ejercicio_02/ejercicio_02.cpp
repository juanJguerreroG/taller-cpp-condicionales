#include <iostream>
#include <math.h>

int main()
{
    
    double l1;
    double l2;
    double l3;
    
    std::cout<<"Ingresa el primer lado ";
    std::cin>>l1;
    std::cout<<"Ingresa el segundo lado ";
    std::cin>>l2;
    std::cout<<"Ingresa el tercer lado ";
    std::cin>>l3;

    if ( l1+l2>l3 && l1+l3>l2 && l2+l3>l1 ) {   
        
        if (l1==l2 && l2==l3){
            
            std::cout<<"El triangulo es equilatero\n";
            
        }else if ( l1==l2 || l1==l3 || l2==l3 ){
            
            std::cout<<"El triangulo es isoceles\n";
            
        } else {
            
            std::cout<<"El triangulo es escaleno\n";
            
        }
        
        double l1 = std::pow(l1, 2);
        double l2 = std::pow(l2, 2);
        double l3 = std::pow(l3, 2);
        
        if ( l1+l2==l3 || l1+l3==l2 || l2+l3==l1 ) {
            
            std::cout<<"El triangulo es rectangulo";
            
        } else if ( l1+l2>l3 && l1+l3>l2 && l2+l3>l1 ){
            
            std::cout<<"El triangulo es acutangulo";
            
        } else {
            
            std::cout<<"El triangulo es obtusangulo";
            
        }
        
    } else {
        
        std::cout<<"No forma un triangulo valido";
        
    }

    return 0;
}
