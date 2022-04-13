#ifndef NOTAS_COURSE_H
#define NOTAS_COURSE_H

#include <string>
#include <vector>
#include "grades.h"
#include "student.h"

class Course{
    private:
        std::string name;
        int id;
        Grades& grades;

    public:
        Course(std::string name, int id, Grades& grades):
            name(name), id(id), grades(grades) {};

        std::string getName() const;
        int getID() const;

        std::vector<Student> students;
        void addStudent(std::string name,
                         std::string surname);
        void addStudent(std::string name,
                   std::string surname,
                   int id);
        void addStudent(Student&);

        std::vector<GradeType> grade_types;
        void addGradeType(std::string name, int percentage);

        void setScore(Student&, const GradeType&, double score);
        double getScore(Student&, const GradeType&) const;
};

#endif // NOTAS_COURSE_H
