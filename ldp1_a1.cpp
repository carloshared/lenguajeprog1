//carloshared

#include <stdio.h>
#include <iostream>

int main()
{
    int edad;
    std::cout << "Ingresa tu edad: ";
    std::cin >> edad;
    
    if (edad >=18){
        std::cout <<"Usted cumple con la mayoría de edad." << std::endl;
    } else {
        std::cout <<"Usted no cumple con la mayoría de edad." << std::endl;
    }
    
    return 0;
}