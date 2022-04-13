#ifndef NOTAS_STUDENT_H
#define NOTAS_STUDENT_H

#include "course.h"
#include "grades.h"
#include <string>
#include <vector>

class Course;

class Student{
	private:
		static int count;
        int id;
		std::string name;
		std::string surname;
        Grades grades; // Fix grades in this class
        friend class Course;

	public:
        // Constructor without ID
		Student(std::string name,
				   std::string surname):
                   id(count++), name(name),
                   surname(surname) {};
        // Constructor when ID is given
        Student(std::string name,
				   std::string surname,
                   int id):
                   id(id), name(name),
                   surname(surname) {++count;};

        int getID();
        std::string getName();
        void setName(std::string);
        std::string getFullName();

        void setScore(Course&, const GradeType&, double score);
        double getScore(Course&, GradeType&);
};

#endif // NOTAS_STUDENT_H
