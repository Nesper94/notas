#include "grades.h"
#include "student.h"
#include <iostream>

id_type GradeType::count = 1;

double Grades::getScore(id_type course_id, id_type student_id,
                        id_type grade_type_id) const {
    return grades.at(course_id).at(student_id).at(grade_type_id);
}

void Grades::setScore(id_type course_id, id_type student_id,
                        id_type grade_type_id, double score){
    grades[course_id][student_id][grade_type_id] = score;
}

// Grade_type

std::string GradeType::getName() const {
    return name;
}

int GradeType::getPercentage() const {
    return percentage;
}

id_type GradeType::getID() const {
    return id;
}

std::ostream& operator<<(std::ostream& os, const GradeType& gr)
{
    os << "Name: " << gr.name << '\n' <<
          "Percentage: " << gr.percentage << '\n';
    return os;
}
