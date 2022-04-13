#include <iostream>
#include <student.h>

int main(){
    Student jacinto("Jacinto", "Morsiyencio Godzilla");
    Student eusebio("Eusebio", "Kakaroto de las Mercedes", 98989898);
    Student vege("Vegeta", "García Pérez");

    std::cout << "ID: " << jacinto.getID() << '\n';
    std::cout << "ID: " << eusebio.getID() << '\n';
    std::cout << "ID: " << vege.getID() << '\n';

    std::cout << "Nombre: " << jacinto.getFullName() << '\n';
    std::cout << "Nombre: " << eusebio.getFullName() << '\n';
    std::cout << "Nombre: " << vege.getFullName() << '\n';
    std::cout << "Nombre: " << vege.getName() << '\n';

    eusebio.setName("Gecko Moria");
    std::cout << "Nombre: " << eusebio.getFullName() << '\n';
    return 0;
}
