#ifndef LAB7_STUDENTAFTERFIRSTTERM_H
#define LAB7_STUDENTAFTERFIRSTTERM_H

#include "students.h"
#include <iostream>


class StudentAfter1stTerm : public Student{
public:
    StudentAfter1stTerm::StudentAfter1stTerm(char* name, int year, int group, int record_book, int *grades_after_1st_term);
    StudentAfter1stTerm(const StudentAfter1stTerm &origin);
    void SetStudentsGrades(int number_of_subject, int  grade);
    int GetStudentsGrade(int number_of_subject);
    double AverengeScore() override;
    friend std::ostream &operator << (std:: ostream &out, const StudentAfter1stTerm& origin);

protected:
    int grades_after_1st_term[4];
};



#endif //LAB7_STUDENTAFTERFIRSTTERM_H
