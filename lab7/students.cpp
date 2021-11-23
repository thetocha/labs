#include "students.h"
#include "studentAfterFirstTerm.h"
#include <iostream>

int Student::count = 0;
Student::Student(char* name, int year, int group, int record_book){
    this-> name = name;
    this-> year = year;
    this-> group = group;
    this-> record_book = record_book;
    ++count;
    id = count;
}
Student::Student(const Student &origin){
    this-> name = origin.name;
    this-> year = origin.year;
    this-> group = origin.group;
    this-> record_book = origin.record_book;
    ++ count;
    id = count;
};

Student::~Student(){
    delete[] name;
}

 double Student::AverengeScore(){

    return 0;
}

int Student::GetStudentsId(){
    return id;
}
char Student::GetStudentsName(){
    return (char) name;
};

int  Student::GetStudentsYear(){
    return  year;
};

int Student::GetStudentsGroup(){
    return group;
}

int  Student::GetSudentsRecordBook(){
    return record_book;
}

void Student::SetStudentsYear(int year){
    this-> year = year;
};

void Student::SetStudentsGroup(int group){
    this-> group = group;
};

void Student::SetStudentsName(char* name){
    this-> name = name;
}


std::ostream& operator << (std:: ostream &out, const Student& origin){
    out  << "Name: " <<origin.name  << " Year: " << origin.year << " Group: " << origin.group << " Record book: " << origin.record_book << " ID: " << origin.id;
    return out;
}

