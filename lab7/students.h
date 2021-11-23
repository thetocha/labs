#ifndef LAB7_STUDENTS_H
#define LAB7_STUDENTS_H

#include <iostream>


class Student{
public:
    static int count;
    Student(char* name, int year, int group, int record_book);
    Student(const Student& origin);
    ~Student();
    virtual double AverengeScore();
    int GetStudentsId();
    char GetStudentsName();
    int  GetStudentsYear();
    int  GetStudentsGroup();
    int  GetSudentsRecordBook();
    void SetStudentsYear(int year);
    void SetStudentsGroup(int group);
    void SetStudentsName(char* name);
    friend std::ostream& operator << (std:: ostream &out, const Student& origin);

protected:
    int id = 1;
    int record_book;
    char* name;
    int year;
    int group;

};
#endif //LAB7_STUDENTS_H
