#include "2ndTerm.h"

StudentAfter2ndTerm:: StudentAfter2ndTerm(char* name, int year, int group, int record_book,int grades_after_1st_term[4], int grades_after_2nd_term[5]):StudentAfter1stTerm(name, int (year), int (group), int (record_book), grades_after_1st_term){

    for(int i=0; i < 5; ++i){
        this-> grades_after_2nd_term[i] = grades_after_2nd_term[i];
    }
}


StudentAfter2ndTerm::StudentAfter2ndTerm(const StudentAfter2ndTerm &origin): StudentAfter1stTerm(origin){

    for(int i=0; i < 5; ++i){
        this-> grades_after_2nd_term[i] = origin.grades_after_2nd_term[i];
    }
}


void StudentAfter2ndTerm::SetGradesAfter2ndTerm(int number_0f_subject, int grade){
    this-> grades_after_2nd_term[number_0f_subject] = grade;
}

std::ostream& operator << (std:: ostream &out, const StudentAfter2ndTerm& origin){
    out  << "Name: " <<origin.name  << " Year: " << origin.year << " Group: " << origin.group << " Record book: " << origin.record_book << " ID: "  << origin.id << " Grades: "
         << origin.grades_after_1st_term[0]  << " " <<origin.grades_after_1st_term[1] << " " << origin.grades_after_1st_term[2] << " " << origin.grades_after_1st_term[3] << " "
         << origin.grades_after_2nd_term[0]<< " " << origin.grades_after_2nd_term[1] << " " << origin.grades_after_2nd_term[2]  << " " << origin.grades_after_2nd_term[3] << " " << origin.grades_after_2nd_term[4];
    return out;
}

int StudentAfter2ndTerm::GetGradesAfter2ndTerm(int number_of_subject){
    int grade;
    grade = grades_after_2nd_term[number_of_subject];
    return grade;
}

double StudentAfter2ndTerm::AverengeScore(){
    int sum = 0;
    for(int i=0; i < 4; ++i){
        sum += grades_after_1st_term[i];
    }
    for(int i=0; i < 5; ++i){
        sum += grades_after_2nd_term[i];
    }
    double averenge_score;
    averenge_score = sum / 9;
    return averenge_score;
}