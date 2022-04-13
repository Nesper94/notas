#include "course.h"
#include <iostream>

int main(){
    Grades grades;
    Course curso1("Biología de Sistemas", 20221, grades);
    std::cout << curso1.getName() << '\n';
    std::cout << curso1.getID() << '\n';

    // Test students
    curso1.addStudent("Jacinto", "Morsiyencio Godzilla");
    curso1.addStudent("Eusebio", "Kakaroto de las Mercedes", 9999999);
    std::cout << curso1.students[0].getFullName() << '\n';
    std::cout << curso1.students[0].getID() << '\n';
    std::cout << curso1.students[1].getFullName() << '\n';
    std::cout << curso1.students[1].getID() << '\n';

    // Test grades
    curso1.addGradeType("Taller Python", 15);
    std::cout << curso1.grade_types[0];

    curso1.setScore(curso1.students[0], curso1.grade_types[0], 3.5);
    std::cout << "Score: " << curso1.getScore(curso1.students[0],
        curso1.grade_types[0]) << '\n';

    Student godzilla("Godzilla Hesneyder", "del Perpetuo Socorro", 1828);
    godzilla.setScore(curso1, curso1.grade_types[0], 4.7);
    std::cout << "Nota de " << godzilla.getFullName() << ": " <<
        godzilla.getScore(curso1, curso1.grade_types[0]) << '\n';

    curso1.addStudent(godzilla);
    curso1.setScore(curso1.students[2], curso1.grade_types[0], 5.0);
    std::cout << "Nueva nota de " << curso1.students[2].getFullName() <<
        ": " << curso1.getScore(godzilla, curso1.grade_types[0]) << '\n';
}
