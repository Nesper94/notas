#include "student.h"

int Student::count = 1; // This count must start in 1, as 0 is reserved for grade_types

int Student::getID() const {
    return id;
}

std::string Student::getFullName() const {
    return name+" "+surname;
}

std::string Student::getName() const {
    return name;
}

void Student::setName(std::string new_name){
    name = new_name;
}

void Student::setScore(Course& course, const GradeType& gt, double score){
    grades.setScore(course.getID(), id, gt.getID(), score);
}

double Student::getScore(Course& course, GradeType &gt) const {
    return grades.getScore(course.getID(), id, gt.getID());
}
