#ifndef LAB7_2NDTERM_H
#define LAB7_2NDTERM_H

#include "studentAfterFirstTerm.h"
#include <iostream>

class StudentAfter2ndTerm : public StudentAfter1stTerm{
public:
    StudentAfter2ndTerm(char* name, int year, int group, int record_book,int grades_after_1st_term[4], int grades_after_2nd_term[5]);
    StudentAfter2ndTerm(const StudentAfter2ndTerm &origin);
    void SetGradesAfter2ndTerm(int number_0f_subject, int grade);
    double AverengeScore() override;
    friend std::ostream& operator << (std::ostream& out, const StudentAfter2ndTerm& origin);

protected:
    int GetGradesAfter2ndTerm (int number_of_subject);
    int grades_after_2nd_term[5]{};

};

#endif //LAB7_2NDTERM_H
