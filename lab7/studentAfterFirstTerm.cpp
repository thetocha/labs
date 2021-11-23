#include "studentAfterFirstTerm.h"



StudentAfter1stTerm::StudentAfter1stTerm(char* name, int year, int group, int record_book, int *grades_after_1st_term) : Student(name, int (year), int (group), int (record_book)){

    for(int i=0; i < 4; ++i){
        this->  grades_after_1st_term[i] = grades_after_1st_term[i];
    }

}


StudentAfter1stTerm::StudentAfter1stTerm(const StudentAfter1stTerm &origin) : Student(origin.name, origin.year, origin.group, origin.record_book){

    for(int i=0; i < 4; ++i){
        this-> grades_after_1st_term[i] = origin.grades_after_1st_term[i];
    }
}


void StudentAfter1stTerm::SetStudentsGrades (int number_of_subject, int  grade){
    this -> grades_after_1st_term[number_of_subject] = grade;
};

int StudentAfter1stTerm:: GetStudentsGrade(int number_of_subject){
    int grade;
    grade = grades_after_1st_term[number_of_subject];
    return grade;
}

double StudentAfter1stTerm::AverengeScore(){
    int sum = 0;
    for(int i=0; i < 4; ++i){
        sum +=  grades_after_1st_term[i];
    }
    double averenge_score;
    averenge_score = (double) sum / 4;
    return averenge_score;
}



std::ostream& operator << (std:: ostream &out, const StudentAfter1stTerm& origin){
    out  << "Name: " <<origin.name  << " Year: " << origin.year << " Group: " << origin.group << " Record book: " << origin.record_book << " ID: " << origin.id
         << " Grades:" << origin.grades_after_1st_term[0]  << " " <<origin.grades_after_1st_term[1] << " " << origin.grades_after_1st_term[2] << " " << origin.grades_after_1st_term[3];
    return out;
}