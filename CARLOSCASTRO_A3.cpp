#include <iostream>
#include <string>

class Empleado {
private:
    
    std::string nombre;
    std::string apellidoPaterno;
    std::string apellidoMaterno;
    std::string fechaNacimiento;
    
public:
    void capturarDatos(){
        std:: cout << "Ingrese el nombre: ";
        std::getline(std::cin >> std::ws, nombre);
        
        std:: cout << "Ingrese el apellido paterno: ";
        std::getline(std::cin >> std::ws, apellidoPaterno);
        
        std:: cout << "Ingrese el apellido materno: ";
        std::getline(std::cin >> std::ws, apellidoMaterno);
        
        std:: cout << "Ingrese la fecha de nacimiento (DD/MM/AAAA): ";
        std::getline(std::cin >> std::ws, fechaNacimiento);
    }
    
    std::string generarRFC() {
        std::string rfc;
        
        //Primeros dos caracteres
        rfc += apellidoPaterno[0];
        for (char c : apellidoPaterno) {
            if (c == 'A' || c == 'E' || c == 'I'|| c == 'O' || c =='U') {
                rfc += c;
                break;
        }
    }
    
    //3ra posición
    if (apellidoMaterno.empty()) {
        rfc += 'X';
    } else {
        rfc += apellidoMaterno[0];
    }
    
    //4ta posición
    rfc += (nombre[0] == 'Ñ') ? 'X' : nombre[0];
    
    //5ta y 6ta posición (año nacimiento)
    rfc += fechaNacimiento.substr(8, 2);
    
    //7ma y 8va posición (mes nacimiento)
    rfc += fechaNacimiento.substr(3, 2);
    
    //9na y 10ma posición (día nacimiento)
    rfc += fechaNacimiento.substr(0, 2);
    
    return rfc;
    
    }
    
};

int main () {
    Empleado empleado;
    
    empleado.capturarDatos();
    std::string rfc = empleado.generarRFC();
    
    std::cout << "El RFC generado es: " << rfc << std::endl;
    
    return 0;
}

