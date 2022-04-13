#include "course.h"
#include "grades.h"

void Course::addStudent(std::string name,
                   std::string surname){
    students.push_back(
        Student(name, surname)
    );
}

void Course::addStudent(std::string name,
                   std::string surname,
                   int id){
    students.push_back(
        Student(name, surname, id)
    );
}

void Course::addStudent(Student& st){
    students.push_back(st);
}

void Course::addGradeType(std::string name, int percentage){
    GradeType gt(name, percentage, this->id);
    grade_types.push_back(
        gt
    );

    // 0 is a special id for grade types, this will contain the
    // percentages of grades
    grades.setScore(id, 0, gt.getID(), gt.getPercentage());
}

std::string Course::getName() const {
    return this->name;
}

int Course::getID() const {
    return this->id;
}

void Course::setScore(Student& st, const GradeType& gt, double score){
    grades.setScore(id, st.getID(), gt.getID(), score);
}

double Course::getScore(Student& st, const GradeType& gt) const {
    return grades.getScore(id, st.getID(), gt.getID());
}
