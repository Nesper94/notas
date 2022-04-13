#ifndef NOTAS_GRADES_H
#define NOTAS_GRADES_H

#include <string>
#include <unordered_map>

#include "common.h"

class Student;

class GradeType{
    private:
        std::string name;
        int percentage;
        static id_type count;
        id_type id;
        int courseID;
    public:
        GradeType(std::string name, int percentage, id_type courseID):
            name(name), percentage(percentage), courseID(courseID),
            id(count++) {};
        std::string getName();
        int getPercentage();
        id_type getID() const;
        friend std::ostream& operator<<(std::ostream& os, const GradeType& gr);
};

class Grades{
    private:
        std::unordered_map<id_type, // Course ID
        std::unordered_map<id_type, // Student ID
        std::unordered_map<id_type, // GradeType ID
        double>>> grades;
    public:
        //Grades();
        double getScore(id_type course_id, id_type student_id,
                        id_type grade_type_id);
        void setScore(id_type course_id, id_type student_id,
                        id_type grade_type_id, double score);
};

#endif // NOTAS_GRADES_H
