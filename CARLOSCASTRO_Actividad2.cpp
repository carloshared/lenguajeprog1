//carloshared

#include <iostream>

int main() {
    float numero1, numero2;
    
    std::cout <<"Escribe el primer numero: ";
    std::cin >> numero1;
    
    std::cout <<"Escribe el segundo numero: ";
    std::cin >> numero2;
    
    float suma = numero1 + numero2;
    float resta = numero1 - numero2;
    float multiplicacion = numero1 * numero2;
    float division = numero1 / numero2;
    
    std::cout << "El resultado de la suma es: " << suma << std::endl;
    std::cout << "El resultado de la resta es: " << resta << std::endl;
    std::cout << "El resultado de la multiplicacion es: " << multiplicacion << std::endl;
    std::cout << "El resultado de la division es: " << division << std::endl;
    
    return 0;
}